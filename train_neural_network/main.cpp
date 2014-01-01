#include "engine.h"
#include "syms.h"
#include <iostream>
#include <conio.h>

#include <opencv2/opencv.hpp>

#ifdef _WIN32
#include <windows.h>
#endif

using namespace std;
using namespace cv;

vector< pair< char, Mat > > train_data( const std::string& image_folder, int data_height, int data_width )
{
	vector< pair< char, Mat > > ret;
#ifdef _WIN32
	WIN32_FIND_DATAA find_file_data;
	HANDLE h_find = FindFirstFileA( ( image_folder  + "\\*" ).c_str(), &find_file_data );
	if ( INVALID_HANDLE_VALUE == h_find ) 
	{
		return ret;
	}
	do
	{
		if ( !( find_file_data.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY ) )
		{
			const string next_file_name = image_folder + "\\" + find_file_data.cFileName;
			Mat next_mat( imread( next_file_name ) );
			Mat one_chan_gray;
			if ( next_mat.channels() == 3 && next_mat.depth() == CV_MAT_DEPTH( CV_8U ) )
			{
				Mat gray( next_mat.size(), CV_8U );
				cvtColor( next_mat, one_chan_gray, CV_RGB2GRAY );
			}
			else if ( next_mat.channels() == 1 && next_mat.depth() == CV_MAT_DEPTH( CV_8U ) )
			{
				one_chan_gray = next_mat;
			}

			if ( !one_chan_gray.empty() )
			{
				Mat gray_sized( data_height, data_width, CV_8U );
				cv::resize(one_chan_gray, gray_sized, gray_sized.size() );
				Mat gray_float( data_height, data_width, CV_32F );
				gray_sized.convertTo( gray_float, CV_32F );
				switch ( find_file_data.cFileName[ 0 ] )
				{
				case '0':
				case '1':
				case '2':
				case '3':
				case '4':
				case '5':
				case '6':
				case '7':
				case '8':
				case '9':
					ret.push_back( make_pair( find_file_data.cFileName[ 0 ], gray_float ) );
				default:
					break;
				}
			}
			else
			{
				cout << "invalid image format: " << find_file_data.cFileName;
			}
		}
	}
	while ( FindNextFileA(h_find, &find_file_data) != 0 );
	FindClose( h_find );
#else
#endif
	return ret;
}

void parse_to_input_output_data( const vector< pair< char, Mat > >& t_data, Mat& input, Mat& output, int els_in_row )
{
	input = Mat( t_data.size(), els_in_row, CV_32F );
	output = Mat( t_data.size(), 10, CV_32F );
	for ( size_t nn = 0; nn < t_data.size(); ++nn )
	{
		for ( int mm = 0; mm < t_data.at( nn ).second.rows; ++mm )
		{
			for ( int kk = 0; kk < t_data.at( nn ).second.cols; ++kk )
			{
				const int cur_el = mm * t_data.at( nn ).second.cols + kk;
				input.at< float >( nn, cur_el ) = t_data.at( nn ).second.at< float >( mm, kk );
			}
		}
		for ( int mm = 0; mm < 10; ++mm )
		{
			output.at< float >( nn, mm ) = 0.;
		}
		assert( t_data.at( nn ).first >= 48 && t_data.at( nn ).first <= 57 );
		output.at< float >( nn, t_data.at( nn ).first - 48 ) = 1.;
	}
}

int search_max_val( const Mat& data, int row )
{
	int max_col = 0;
	float max_val = data.at< float >( row, 0 );
	for ( int nn = 1; nn < data.cols; ++nn )
	{
		if ( data.at< float >( row, nn ) > max_val )
		{
			max_col = nn;
			max_val = data.at< float >( row, nn );
		}
	}
	return max_col;
}

float evaluate( const Mat& output, int output_row, const Mat& pred_out )
{
	// проверяем правильный ли ответ
	if ( search_max_val( output, output_row ) != search_max_val( pred_out, 0 ) )
		return -1;

	// находим смещение
	float ret = 0.;
	for ( int nn = 0; nn < output.cols; ++nn )
	{
		ret += abs( output.at< float >( output_row, nn ) - pred_out.at< float >( 0, nn ) );
	}
	return ret;
}

const int max_hidden_neuron = 500;
const int data_width = 15;
const int data_height = 22;

void fill_hidden_layers( vector< Mat >& configs, Mat& layer_sizes, int layer_index, int count_hidden )
{
	for ( int nn = 10; nn <= max_hidden_neuron; ++nn )
	{
		layer_sizes.at< int >( layer_index + 1 ) = nn;
		if ( layer_index == count_hidden - 1 )
		{
			configs.push_back( layer_sizes.clone() );
		}
		else
		{
			fill_hidden_layers( configs, layer_sizes, layer_index + 1, count_hidden );
		}
	}
}

int main( int argc, char** argv )
{
	if ( argc <= 1 )
	{
		cout << "usage: auto_test_desktop image_folder";
		return 1;
	}

	// ищем оптимальное количество нейронов и уровней в невидимом слое
	const string image_folder( argv[ 1 ] );
	const int max_hidden_levels = 1;
	const vector< pair< char, Mat > > t_data = train_data( image_folder, data_height, data_width );
	if ( t_data.empty() )
	{
		cout << "input files not found";
		return 1;
	}
	Mat input, output;
	parse_to_input_output_data( t_data, input, output, data_width * data_height );
	Mat weights( 1, t_data.size(), CV_32FC1, Scalar::all( 1 ) );

	// формируем конфигурации сети
	vector< Mat > configs;
	Mat first_size( 1, 2, CV_32SC1 );
	first_size.at< int >( 0 ) = data_width * data_height;
	first_size.at< int >( 1 ) = 10; // 10 цифр
	configs.push_back( first_size );
	for ( int nn = 1; nn <= max_hidden_levels; ++nn )
	{
		const int all_levels_count = 2 + nn;
		Mat l_size( 1, all_levels_count, CV_32SC1 );
		l_size.at< int >( 0 ) = data_width * data_height;
		l_size.at< int >( all_levels_count - 1 ) = 10; // 10 цифр

		fill_hidden_layers( configs, l_size, 0, nn );
	}

	assert( !configs.empty() );
	for ( size_t cc = 0; cc < configs.size(); ++cc )
	{
		cout << configs.at( cc ) << endl;
		try
		{
			CvANN_MLP mlp( configs.at( cc ) );
			mlp.train( input, output, weights );
			Mat test_sample( 1, data_width * data_height, CV_32FC1 );
			for ( size_t ll = 0; ll < t_data.size(); ++ll )
			{
				for ( int yy = 0; yy < data_width * data_height; ++yy )
				{
					test_sample.at< float >( 0, yy ) = input.at< float >( ll, yy );
				}
				Mat pred_out;
				mlp.predict( test_sample, pred_out );
//				cout << evaluate( output, ll, pred_out ) << endl;
			}
		}
		catch (const exception& e)
		{
			(void)e;
		}
	}
}
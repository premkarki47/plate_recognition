#include "syms.h"

using namespace std;

template< class T, size_t n, size_t m >
void fill_vector( std::vector< std::vector< float > >& ret, const T (&arr)[n][m] )
{
	const int row_count = n;
	const int col_count = m;
	for ( int nn = 0; nn < row_count; ++nn )
	{
		ret.push_back( vector< float >( arr[ nn ], arr[ nn ] + col_count ) );
	}
}

std::vector< std::vector< float > > std_sym2()
{
	std::vector< std::vector< float > > ret;
	const float rows[ ][ 13 ] = {
			{ -2, -1, -1, -1,  1,  1,  1,  1,  1, -1, -1, -1, -2 },
			{ -1, -1,  1,  1,  1,  2,  2,  2,  1,  1,  1, -1, -1 },
			{ -1,  1,  1,  2,  1,  1,  1,  1,  1,  2,  1,  1, -1 },
			{ -1,  1,  2,  1,  1, -1, -1, -1,  1,  1,  2,  1, -1 },
			{  1,  1,  1,  1, -1, -1, -2, -1, -1,  1,  1,  1,  1 },
			{  1,  1,  1, -1, -1, -2, -2, -2, -1, -1,  1,  2,  1 },
			{ -1, -1, -1, -1, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{ -2, -2, -2, -2, -2, -2, -2, -2, -1, -1,  1,  1,  1 },
			{ -2, -2, -2, -2, -2, -2, -2, -1, -1,  1,  1,  1, -1 },
			{ -2, -2, -2, -2, -2, -2, -1, -1,  1,  1,  1,  1, -1 },
			{ -2, -2, -2, -2, -2, -1, -1,  1,  1,  1,  1, -1, -1 },
			{ -2, -2, -2, -2, -1, -1,  1,  1,  2,  1, -1, -1, -2 },
			{ -2, -2, -2, -1, -1,  1,  1,  2,  1,  1, -1, -2, -2 },
			{ -2, -2, -2, -1,  1,  1,  2,  1,  1, -1, -1, -2, -2 },
			{ -2, -2, -1, -1,  1,  2,  1,  1, -1, -1, -2, -2, -2 },
			{ -2, -1, -1,  1,  1,  1,  1, -1, -1, -2, -2, -2, -2 },
			{ -1, -1,  1,  1,  1,  1, -1, -1, -2, -2, -2, -2, -2 },
			{ -1,  1,  1,  2,  1, -1, -1, -2, -2, -2, -2, -2, -2 },
			{ -1,  1,  2,  2,  1, -1, -1, -1, -1, -1, -1, -1, -1 },
			{  1,  1,  2,  2,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
			{  1,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  1 },
			{  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 }
	};
	fill_vector( ret, rows );
	return ret;
}

std::vector< std::vector< float > > std_symA()
{
	std::vector< std::vector< float > > ret;
	const float rows[ ][ 13 ] = {
			{ -2, -2, -2, -2, -1,  1,  1,  1, -1, -2, -2, -2, -2 },
			{ -2, -2, -2, -1, -1,  1,  2,  1, -1, -1, -2, -2, -2 },
			{ -2, -2, -2, -1,  1,  1,  2,  1,  1, -1, -2, -2, -2 },
			{ -2, -2, -2, -1,  1,  2,  2,  2,  1, -1, -2, -2, -2 },
			{ -2, -2, -1, -1,  1,  2,  2,  2,  1, -1, -1, -2, -2 },
			{ -2, -2, -1,  1,  1,  1,  1,  1,  1,  1, -1, -2, -2 },
			{ -2, -2, -1,  1,  1,  1, -2,  1,  1,  1, -1, -2, -2 },
			{ -2, -1, -1,  1,  1, -2, -2, -2,  1,  1, -1, -1, -2 },
			{ -2, -1,  1,  1,  1, -2, -2, -2,  1,  1,  1, -1, -2 },
			{ -2, -1,  1,  2,  1, -2, -2, -2,  1,  2,  1, -1, -2 },
			{ -1, -1,  1,  2,  1, -2, -2, -2,  1,  2,  1, -1, -1 },
			{ -1,  1,  1,  2,  1,  1,  1,  1,  1,  2,  1,  1, -1 },
			{ -1,  1,  2,  2,  2,  2,  2,  2,  2,  2,  2,  1, -1 },
			{ -1,  1,  2,  1,  1,  1,  1,  1,  1,  1,  2,  1, -1 },
			{  1,  1,  1,  1, -1, -1, -1, -1, -1,  1,  1,  1,  1 },
			{  1,  2,  1, -1, -1, -2, -2, -2, -1, -1,  1,  2,  1 },
			{  1,  1,  1, -1, -2, -2, -2, -2, -2, -1,  1,  1,  1 }
	};
	fill_vector( ret, rows );
	return ret;
}

std::vector< std::vector< float > > std_symO()
{
	std::vector< std::vector< float > > ret;
	const float rows[ ][ 14 ] = {
			{ -2, -2, -1, -1,  1,  1,  1,  1,  1,  1, -1, -1, -2, -2 },
			{ -2, -1, -1,  1,  1,  2,  2,  2,  2,  1,  1, -1, -1, -2 },
			{ -1, -1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, -1, -1 },
			{ -1,  1,  1,  1,  1, -1, -1, -1, -1,  1,  1,  1,  1, -1 },
			{ -1,  1,  1,  1, -1, -1, -2, -2, -1, -1,  1,  1,  1, -1 },
			{  1,  1,  1, -1, -1, -2, -2, -2, -2, -1, -1,  1,  1,  1 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  1,  1, -1, -1, -2, -2, -2, -2, -1, -1,  1,  1,  1 },
			{ -1,  1,  1,  1, -1, -1, -2, -2, -1, -1,  1,  1,  1, -1 },
			{ -1,  1,  1,  1,  1, -1, -1, -1, -1,  1,  1,  1,  1, -1 },
			{ -1, -1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, -1, -1 },
			{ -2, -1, -1,  1,  1,  1,  2,  2,  1,  1,  1, -1, -1, -2 },
			{ -2, -2, -1, -1, -1,  1,  1,  1,  1, -1, -1, -1, -2, -2 }
	};
	fill_vector( ret, rows );
	return ret;
}

std::vector< std::vector< float > > std_symC()
{
	std::vector< std::vector< float > > ret;
	const float rows[ ][ 12 ] = {
			{ -3, -2, -2, -1, -1,  1,  1,  1,  1,  1, -1, -1 },
			{ -2, -2, -1, -1,  1,  1,  2,  2,  2,  1,  1,  1 },
			{ -2, -1, -1,  1,  1,  1,  1,  1,  1,  1,  2,  1 },
			{ -1, -1,  1,  1,  1,  1, -1, -1, -1,  1,  1,  1 },
			{ -1,  1,  1,  1,  1, -1, -1, -2, -1, -1, -1, -1 },
			{ -1,  1,  2,  1, -1, -1, -2, -2, -2, -2, -2, -2 },
			{  1,  1,  1,  1, -1, -2, -2, -2, -2, -2, -2, -2 },
			{  1,  2,  1, -1, -1, -2, -2, -2, -2, -2, -2, -2 },
			{  1,  2,  1, -1, -1, -2, -2, -2, -2, -2, -2, -2 },
			{  1,  1,  1,  1, -1, -2, -2, -2, -2, -2, -2, -2 },
			{ -1,  1,  2,  1, -1, -2, -2, -2, -2, -2, -2, -2 },
			{ -1,  1,  1,  1, -1, -1, -2, -2, -2, -2, -2, -2 },
			{ -1, -1,  1,  1,  1, -1, -1, -2, -1, -1, -1, -1 },
			{ -2, -1,  1,  1,  1,  1, -1, -1, -1,  1,  1,  1 },
			{ -2, -1, -1,  1,  1,  1,  1,  1,  1,  1,  2,  1 },
			{ -2, -2, -1, -1,  1,  1,  2,  2,  2,  1,  1,  1 },
			{ -3, -2, -2, -1, -1,  1,  1,  1,  1,  1, -1, -1 }
	};
	fill_vector( ret, rows );
	return ret;
}


std::vector< std::vector< float > > std_sym9()
{
	std::vector< std::vector< float > > ret;
	const float rows[ ][ 14 ] = {
			{ -2, -2, -1, -1,  1,  1,  1,  1,  1, -1, -1, -1, -2, -2 },
			{ -2, -1, -1,  1,  1,  2,  2,  2,  1,  1,  1, -1, -1, -2 },
			{ -1, -1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, -1, -1 },
			{ -1,  1,  1,  1,  1, -1, -1, -1, -1,  1,  1,  1,  1, -1 },
			{  1,  1,  1,  1, -1, -1, -2, -2, -1, -1,  1,  2,  1, -1 },
			{  1,  2,  1, -1, -1, -2, -2, -2, -2, -1,  1,  2,  1,  1 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -2, -1,  1,  2,  2,  1 },
			{  1,  2,  1, -1, -1, -2, -2, -2, -2, -1,  1,  2,  2,  1 },
			{  1,  1,  1,  1, -1, -1, -2, -2, -1, -1,  1,  2,  2,  1 },
			{ -1,  1,  2,  1,  1, -1, -1, -1, -1,  1,  1,  2,  1,  1 },
			{ -1,  1,  1,  2,  1,  1,  1,  1,  1,  1,  2,  2,  1, -1 },
			{ -1, -1,  1,  1,  1,  2,  2,  2,  2,  2,  2,  2,  1, -1 },
			{ -2, -1, -1, -1,  1,  1,  1,  1,  1,  1,  2,  1,  1, -1 },
			{ -2, -2, -2, -1, -1, -1, -1, -1, -1,  1,  2,  1, -1, -1 },
			{ -2, -2, -2, -2, -2, -2, -2, -1,  1,  1,  2,  1, -1, -2 },
			{ -2, -2, -2, -2, -2, -2, -1, -1,  1,  2,  1,  1, -1, -2 },
			{ -2, -2, -2, -2, -2, -1, -1,  1,  1,  1,  1, -1, -1, -2 },
			{ -2, -2, -2, -2, -2, -1,  1,  1,  2,  1, -1, -1, -2, -2 },
			{ -2, -2, -2, -2, -1, -1,  1,  2,  1,  1, -1, -2, -2, -2 },
			{ -2, -2, -2, -1, -1,  1,  1,  1,  1, -1, -1, -2, -2, -2 },
			{ -2, -2, -1, -1,  1,  1,  1,  1, -1, -1, -2, -2, -2, -2 },
			{ -2, -2, -1,  1,  1,  1,  1, -1, -1, -2, -2, -2, -2, -2 }
	};
	fill_vector( ret, rows );
	return ret;
}

std::vector< std::vector< float > > std_sym0()
{
	std::vector< std::vector< float > > ret;
	const float rows[ ][ 13 ] = {
			{ -2, -1, -1, -1,  1,  1,  1,  1,  1, -1, -1, -2, -2 },
			{ -1, -1,  1,  1,  1,  2,  2,  2,  1,  1, -1, -1, -2 },
			{ -1,  1,  1,  2,  1,  1,  1,  1,  1,  1,  1, -1, -1 },
			{ -1,  1,  2,  1,  1, -1, -1, -1,  1,  1,  1,  1, -1 },
			{ -1,  1,  2,  1, -1, -1, -2, -1, -1,  1,  2,  1, -1 },
			{  1,  1,  1,  1, -1, -2, -2, -2, -1,  1,  1,  1, -1 },
			{  1,  2,  1, -1, -1, -2, -2, -2, -1, -1,  1,  1,  1 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -2, -1,  1,  1,  1 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -1, -1,  1,  1, -1 },
			{  1,  1,  1, -1, -1, -2, -2, -2, -1,  1,  1,  1, -1 },
			{ -1,  1,  1,  1, -1, -1, -2, -1, -1,  1,  2,  1, -1 },
			{ -1,  1,  1,  1,  1, -1, -1, -1,  1,  1,  1,  1, -1 },
			{ -1, -1,  1,  1,  1,  1,  1,  1,  1,  1,  1, -1, -1 },
			{ -2, -1, -1,  1,  1,  2,  2,  2,  1,  1, -1, -1, -2 },
			{ -2, -2, -1, -1,  1,  1,  1,  1,  1, -1, -1, -2, -2 }
	};
	fill_vector( ret, rows );
	return ret;
}

// 1

std::vector< std::vector< float > > std_sym1()
{
	std::vector< std::vector< float > > ret;
	const float rows[ ][ 10 ] = {
			{ -2, -2, -2, -2, -1, -1,  1,  1,  1,  1 },
			{ -2, -2, -2, -1, -1,  1,  1,  2,  2,  1 },
			{ -2, -2, -1, -1,  1,  1,  2,  2,  2,  1 },
			{ -2, -1, -1,  1,  1,  2,  2,  2,  2,  1 },
			{ -1, -1,  1,  1,  2,  1,  1,  1,  2,  1 },
			{ -1,  1,  1,  2,  1,  1, -1,  1,  2,  1 },
			{  1,  1,  2,  1,  1, -1, -1,  1,  2,  1 },
			{  1,  2,  1,  1, -1, -1, -1,  1,  2,  1 },
			{  1,  1,  1, -1, -1, -2, -1,  1,  2,  1 },
			{ -1, -1, -1, -1, -2, -2, -1,  1,  2,  1 },
			{ -2, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{ -2, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{ -2, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{ -2, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{ -2, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{ -2, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{ -2, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{ -2, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{ -2, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{ -2, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{ -2, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{ -2, -2, -2, -2, -2, -2, -1,  1,  1,  1 }
	};
	fill_vector( ret, rows );
	return ret;
}

// 3
std::vector< std::vector< float > > std_sym3()
{
	std::vector< std::vector< float > > ret;
	const float rows[ ][ 12 ] = {
			{  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
			{  1,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  1 },
			{  1,  1,  1,  1,  1,  1,  1,  1,  1,  2,  2,  1 },
			{ -1, -1, -1, -1, -1, -1, -1, -1,  1,  2,  1,  1 },
			{ -2, -2, -2, -2, -2, -1, -1,  1,  1,  1,  1, -1 },
			{ -2, -2, -2, -2, -2, -1,  1,  1,  2,  1, -1, -1 },
			{ -2, -2, -2, -2, -1, -1,  1,  2,  1,  1, -1, -2 },
			{ -2, -2, -2, -1, -1,  1,  1,  1,  1, -1, -1, -2 },
			{ -2, -2, -2, -1,  1,  1,  2,  1, -1, -1, -2, -2 },
			{ -2, -2, -2, -1,  1,  2,  2,  1, -1, -1, -1, -2 },
			{ -2, -2, -2, -1,  1,  2,  2,  1,  1,  1, -1, -1 },
			{ -2, -2, -2, -1,  1,  1,  1,  1,  2,  1,  1, -1 },
			{ -2, -2, -2, -1, -1, -1, -1,  1,  1,  2,  1,  1 },
			{ -2, -2, -2, -2, -2, -2, -1, -1,  1,  1,  2,  1 },
			{ -1, -1, -1, -2, -2, -2, -2, -1, -1,  1,  2,  1 },
			{  1,  1, -1, -1, -2, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  1,  1, -1, -2, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  2,  1, -1, -1, -1, -1, -1, -1,  1,  2,  1 },
			{  1,  1,  1,  1,  1, -1, -1,  1,  1,  1,  1,  1 },
			{ -1,  1,  2,  2,  1,  1,  1,  1,  2,  1,  1, -1 },
			{ -1,  1,  1,  1,  2,  2,  2,  2,  1,  1, -1, -1 },
			{ -1, -1, -1,  1,  1,  1,  1,  1,  1, -1, -1, -2 }
	};
	fill_vector( ret, rows );
	return ret;
}

// 4
std::vector< std::vector< float > > std_sym4()
{
	std::vector< std::vector< float > > ret;
	const float rows[ ][ 12 ] = {
			{ -2, -2, -2, -2, -2, -1,  1,  1,  1,  1, -1, -2 },
			{ -2, -2, -2, -2, -1, -1,  1,  2,  1, -1, -1, -2 },
			{ -2, -2, -2, -2, -1,  1,  1,  1,  1, -1, -2, -2 },
			{ -2, -2, -2, -1, -1,  1,  2,  1, -1, -1, -2, -2 },
			{ -2, -2, -1, -1,  1,  1,  1,  1, -1, -2, -2, -2 },
			{ -2, -2, -1,  1,  1,  1,  1, -1, -1, -2, -2, -2 },
			{ -2, -1, -1,  1,  2,  1, -1, -1, -2, -2, -2, -2 },
			{ -2, -1,  1,  1,  1,  1, -1, -2, -2, -2, -2, -2 },
			{ -1, -1,  1,  2,  1, -1, -1, -2, -2, -2, -2, -2 },
			{ -1,  1,  1,  1,  1, -1, -2, -2, -1, -1, -1, -1 },
			{ -1,  1,  2,  1, -1, -1, -2, -2, -1,  1,  1,  1 },
			{  1,  1,  2,  1, -1, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  2,  2,  1, -1, -1, -1, -1, -1,  1,  2,  1 },
			{  1,  2,  2,  1,  1,  1,  1,  1,  1,  1,  2,  1 },
			{  1,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  1 },
			{  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  2,  1 },
			{ -1, -1, -1, -1, -1, -1, -1, -1, -1,  1,  2,  1 },
			{ -2, -2, -2, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{ -2, -2, -2, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{ -2, -2, -2, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{ -2, -2, -2, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{ -2, -2, -2, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{ -2, -2, -2, -2, -2, -2, -2, -2, -1,  1,  1,  1 }
	};
	fill_vector( ret, rows );
	return ret;
}

//5
std::vector< std::vector< float > > std_sym5()
{
	std::vector< std::vector< float > > ret;
	const float rows[ ][ 13 ] = {
			{ -1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
			{ -1,  1,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  1 },
			{ -1,  1,  2,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
			{ -1,  1,  2,  1, -1, -1, -1, -1, -1, -1, -1, -1, -1 },
			{ -1,  1,  2,  1, -1, -2, -2, -2, -2, -2, -2, -2, -2 },
			{ -1,  1,  2,  1, -1, -2, -2, -2, -2, -2, -2, -2, -2 },
			{ -1,  1,  2,  1, -1, -2, -2, -2, -2, -2, -2, -2, -2 },
			{ -1,  1,  2,  1, -1, -1, -1, -1, -1, -1, -2, -2, -2 },
			{ -1,  1,  2,  1,  1,  1,  1,  1,  1, -1, -1, -1, -2 },
			{ -1,  1,  2,  2,  2,  2,  2,  2,  1,  1,  1, -1, -1 },
			{ -1,  1,  1,  1,  1,  1,  1,  1,  1,  2,  1,  1, -1 },
			{ -1, -1, -1, -1, -1, -1, -1, -1,  1,  1,  2,  1,  1 },
			{ -2, -2, -2, -2, -2, -2, -2, -1, -1,  1,  1,  2,  1 },
			{ -2, -2, -2, -2, -2, -2, -2, -2, -1, -1,  1,  2,  1 },
			{ -2, -2, -2, -2, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{ -1, -1, -1, -1, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{ -1,  1,  1, -1, -1, -2, -2, -2, -1, -1,  1,  2,  1 },
			{  1,  1,  1,  1, -1, -1, -1, -1, -1,  1,  1,  2,  1 },
			{  1,  1,  2,  1,  1,  1,  1,  1,  1,  1,  2,  1,  1 },
			{ -1,  1,  1,  1,  2,  2,  2,  2,  2,  2,  1,  1, -1 },
			{ -1, -1, -1,  1,  1,  2,  2,  2,  1,  1,  1, -1, -1 },
			{ -2, -2, -1, -1,  1,  1,  1,  1,  1, -1, -1, -1, -2 }
	};
	fill_vector( ret, rows );
	return ret;
}

// 6
std::vector< std::vector< float > > std_sym6()
{
	std::vector< std::vector< float > > ret;
	const float rows[ ][ 13 ] = {
			{ -2, -2, -2, -2, -1, -1,  1,  1,  1,  1, -1, -2, -2 },
			{ -2, -2, -2, -1, -1,  1,  1,  2,  1,  1, -1, -2, -2 },
			{ -2, -2, -1, -1,  1,  1,  2,  1,  1, -1, -1, -2, -2 },
			{ -2, -2, -1,  1,  1,  2,  1,  1, -1, -1, -2, -2, -2 },
			{ -2, -1, -1,  1,  2,  1,  1, -1, -1, -2, -2, -2, -2 },
			{ -2, -1,  1,  1,  2,  1, -1, -1, -2, -2, -2, -2, -2 },
			{ -1, -1,  1,  2,  1,  1, -1, -2, -2, -2, -2, -2, -2 },
			{ -1,  1,  1,  2,  1, -1, -1, -2, -2, -2, -2, -2, -2 },
			{ -1,  1,  2,  2,  1, -1, -1, -1, -1, -1, -1, -2, -2 },
			{ -1,  1,  2,  2,  1,  1,  1,  1,  1,  1, -1, -1, -2 },
			{ -1,  1,  2,  2,  2,  2,  2,  2,  2,  1,  1, -1, -1 },
			{  1,  2,  2,  2,  1,  1,  1,  1,  1,  2,  1,  1, -1 },
			{  1,  2,  2,  1,  1, -1, -1, -1,  1,  1,  2,  1,  1 },
			{  1,  2,  1,  1, -1, -1, -2, -1, -1,  1,  1,  2,  1 },
			{  1,  2,  1, -1, -1, -2, -2, -2, -1, -1,  1,  2,  1 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  2,  1, -1, -1, -2, -2, -2, -1, -1,  1,  2,  1 },
			{  1,  1,  1,  1, -1, -1, -2, -1, -1,  1,  1,  1,  1 },
			{ -1,  1,  2,  1,  1, -1, -1, -1,  1,  1,  2,  1, -1 },
			{ -1,  1,  1,  2,  1,  1,  1,  1,  1,  2,  1,  1, -1 },
			{ -1, -1,  1,  1,  1,  2,  2,  2,  1,  1,  1, -1, -1 },
			{ -2, -1, -1, -1,  1,  1,  1,  1,  1, -1, -1, -1, -2 }
	};
	fill_vector( ret, rows );
	return ret;
}

// 7
std::vector< std::vector< float > > std_sym7()
{
	std::vector< std::vector< float > > ret;
	const float rows[ ][ 13 ] = {
			{  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
			{  1,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  1 },
			{  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  2,  2,  1 },
			{ -1, -1, -1, -1, -1, -1, -1, -1, -1,  1,  2,  1,  1 },
			{ -2, -2, -2, -2, -2, -2, -2, -1, -1,  1,  2,  1, -1 },
			{ -2, -2, -2, -2, -2, -2, -2, -1,  1,  1,  2,  1, -1 },
			{ -2, -2, -2, -2, -2, -2, -2, -1,  1,  2,  1,  1, -1 },
			{ -2, -2, -2, -2, -2, -2, -1, -1,  1,  2,  1, -1, -1 },
			{ -2, -2, -2, -2, -2, -2, -1,  1,  1,  2,  1, -1, -2 },
			{ -2, -2, -2, -2, -2, -2, -1,  1,  2,  1,  1, -1, -2 },
			{ -2, -2, -2, -2, -2, -1, -1,  1,  2,  1, -1, -1, -2 },
			{ -2, -2, -2, -2, -2, -1,  1,  1,  2,  1, -1, -2, -2 },
			{ -2, -2, -2, -2, -2, -1,  1,  2,  1,  1, -1, -2, -2 },
			{ -2, -2, -2, -2, -1, -1,  1,  2,  1, -1, -1, -2, -2 },
			{ -2, -2, -2, -2, -1,  1,  1,  2,  1, -1, -2, -2, -2 },
			{ -2, -2, -2, -1, -1,  1,  2,  1,  1, -1, -2, -2, -2 },
			{ -2, -2, -2, -1,  1,  1,  2,  1, -1, -1, -2, -2, -2 },
			{ -2, -2, -2, -1,  1,  2,  1,  1, -1, -2, -2, -2, -2 },
			{ -2, -2, -1, -1,  1,  2,  1, -1, -1, -2, -2, -2, -2 },
			{ -2, -2, -1,  1,  1,  2,  1, -1, -2, -2, -2, -2, -2 },
			{ -2, -2, -1,  1,  2,  1,  1, -1, -2, -2, -2, -2, -2 },
			{ -2, -2, -1,  1,  1,  1, -1, -1, -2, -2, -2, -2, -2 }
	};
	fill_vector( ret, rows );
	return ret;
}

// 8
std::vector< std::vector< float > > std_sym8()
{
	std::vector< std::vector< float > > ret;
	const float rows[ ][ 15 ] = {
			{ -2, -2, -1, -1, -1,  1,  1,  1,  1,  1, -1, -1, -1, -2, -2 },
			{ -2, -1, -1,  1,  1,  1,  2,  2,  2,  1,  1,  1, -1, -1, -2 },
			{ -2, -1,  1,  1,  2,  1,  1,  1,  1,  1,  2,  1,  1, -1, -2 },
			{ -1, -1,  1,  2,  1,  1, -1, -1, -1,  1,  1,  2,  1, -1, -2 },
			{ -1,  1,  1,  2,  1, -1, -1, -2, -1, -1,  1,  2,  1, -1, -1 },
			{ -1,  1,  2,  2,  1, -1, -2, -2, -2, -1,  1,  2,  1,  1, -1 },
			{ -1,  1,  2,  2,  1, -1, -1, -2, -1, -1,  1,  2,  1,  1, -1 },
			{ -1,  1,  1,  2,  1,  1, -1, -1, -1,  1,  1,  2,  1, -1, -1 },
			{ -1, -1,  1,  1,  2,  1,  1,  1,  1,  1,  2,  1,  1, -1, -2 },
			{ -2, -1, -1,  1,  2,  2,  2,  2,  2,  2,  2,  1, -1, -1, -2 },
			{ -2, -1,  1,  1,  2,  1,  1,  1,  1,  1,  2,  1,  1, -1, -1 },
			{ -1, -1,  1,  2,  1,  1, -1, -1, -1,  1,  1,  2,  1,  1, -1 },
			{ -1,  1,  1,  1,  1, -1, -2, -2, -1, -1,  1,  1,  2,  1, -1 },
			{ -1,  1,  2,  1, -1, -1, -2, -2, -2, -1, -1,  1,  2,  1, -1 },
			{  1,  1,  2,  1, -1, -2, -2, -2, -2, -2, -1,  1,  2,  1,  1 },
			{  1,  1,  2,  1, -1, -2, -2, -2, -2, -2, -1,  1,  2,  1,  1 },
			{ -1,  1,  2,  1, -1, -1, -2, -2, -2, -1, -1,  1,  2,  1, -1 },
			{ -1,  1,  2,  1,  1, -1, -1, -2, -1, -1,  1,  1,  2,  1, -1 },
			{ -1,  1,  1,  2,  1,  1, -1, -1, -1,  1,  1,  2,  1,  1, -1 },
			{ -1, -1,  1,  1,  2,  1,  1,  1,  1,  1,  2,  1,  1, -1, -1 },
			{ -2, -1, -1,  1,  1,  1,  2,  2,  2,  1,  1,  1, -1, -1, -2 },
			{ -2, -2, -1, -1, -1,  1,  1,  1,  1,  1, -1, -1, -1, -2, -2 }
	};
	fill_vector( ret, rows );
	return ret;
}

// B
std::vector< std::vector< float > > std_symB()
{
	std::vector< std::vector< float > > ret;
	const float rows[ ][ 13 ] = {
			{  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, -1, -1, -2 },
			{  1,  2,  2,  2,  2,  2,  2,  2,  2,  1,  1, -1, -1 },
			{  1,  2,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, -1 },
			{  1,  2,  1, -1, -1, -1, -1, -1, -1,  1,  1,  1, -1 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -1, -1,  1,  1,  1 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -2, -1,  1,  1,  1 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -1, -1,  1,  1, -1 },
			{  1,  2,  1, -1, -1, -1, -1, -1, -1,  1,  1,  1, -1 },
			{  1,  2,  1,  1,  1,  1,  1,  1,  1,  1,  1, -1, -1 },
			{  1,  2,  2,  2,  2,  2,  2,  2,  2,  2,  1, -1, -1 },
			{  1,  2,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, -1 },
			{  1,  2,  1, -1, -1, -1, -1, -1, -1,  1,  1,  1, -1 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -1, -1,  1,  1,  1 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -1, -1,  1,  1,  1 },
			{  1,  2,  1, -1, -1, -1, -1, -1, -1,  1,  1,  1, -1 },
			{  1,  2,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, -1 },
			{  1,  2,  2,  2,  2,  2,  2,  2,  2,  1,  1, -1, -1 },
			{  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, -1, -1, -2 }
	};
	fill_vector( ret, rows );
	return ret;
}

//E
std::vector< std::vector< float > > std_symE()
{
	std::vector< std::vector< float > > ret;
	const float rows[ ][ 10 ] = {
			{  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
			{  1,  2,  2,  2,  2,  2,  2,  2,  2,  1 },
			{  1,  2,  1,  1,  1,  1,  1,  1,  1,  1 },
			{  1,  2,  1, -1, -1, -1, -1, -1, -1, -1 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -2, -2 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -2, -2 },
			{  1,  2,  1, -1, -1, -1, -1, -1, -1, -1 },
			{  1,  2,  1,  1,  1,  1,  1,  1,  1, -1 },
			{  1,  2,  2,  2,  2,  2,  2,  2,  1, -1 },
			{  1,  2,  1,  1,  1,  1,  1,  1,  1, -1 },
			{  1,  2,  1, -1, -1, -1, -1, -1, -1, -1 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -2, -2 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -2, -2 },
			{  1,  2,  1, -1, -1, -1, -1, -1, -1, -1 },
			{  1,  2,  1,  1,  1,  1,  1,  1,  1,  1 },
			{  1,  2,  2,  2,  2,  2,  2,  2,  2,  1 },
			{  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 }
	};
	fill_vector( ret, rows );
	return ret;
}

//H
std::vector< std::vector< float > > std_symH()
{
	std::vector< std::vector< float > > ret;
	const float rows[ ][ 13 ] = {
			{  1,  1,  1,  1, -1, -2, -2, -2, -2, -1,  1,  1,  1 },
			{  1,  2,  2,  1, -1, -2, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  2,  2,  1, -1, -2, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  2,  2,  1, -1, -2, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  2,  2,  1, -1, -2, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  2,  2,  1, -1, -2, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  2,  2,  1, -1, -1, -1, -1, -1, -1,  1,  2,  1 },
			{  1,  2,  2,  1,  1,  1,  1,  1,  1,  1,  1,  2,  1 },
			{  1,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  1 },
			{  1,  2,  2,  1,  1,  1,  1,  1,  1,  1,  1,  2,  1 },
			{  1,  2,  2,  1, -1, -1, -1, -1, -1, -1,  1,  2,  1 },
			{  1,  2,  2,  1, -1, -2, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  2,  2,  1, -1, -2, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  2,  2,  1, -1, -2, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  2,  2,  1, -1, -2, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  2,  2,  1, -1, -2, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  1,  1,  1, -1, -2, -2, -2, -2, -1,  1,  1,  1 }
	};
	fill_vector( ret, rows );
	return ret;
}

//K
std::vector< std::vector< float > > std_symK()
{
	std::vector< std::vector< float > > ret;
	const float rows[ ][ 12 ] = {
			{  1,  1,  1, -1, -2, -2, -2, -1, -1,  1,  1,  1 },
			{  1,  2,  1, -1, -2, -2, -1, -1,  1,  1,  1, -1 },
			{  1,  2,  1, -1, -2, -1, -1,  1,  1,  1,  1, -1 },
			{  1,  2,  1, -1, -1, -1,  1,  1,  1,  1, -1, -1 },
			{  1,  2,  1, -1, -1,  1,  1,  1,  1, -1, -1, -2 },
			{  1,  2,  1, -1, -1,  1,  1,  1, -1, -1, -2, -2 },
			{  1,  2,  1,  1,  1,  1,  1, -1, -1, -2, -2, -2 },
			{  1,  2,  2,  2,  2,  2,  1, -1, -2, -2, -2, -2 },
			{  1,  2,  2,  2,  2,  2,  1, -1, -1, -2, -2, -2 },
			{  1,  2,  1,  1,  1,  1,  1,  1, -1, -1, -2, -2 },
			{  1,  2,  1, -1, -1, -1,  1,  1,  1, -1, -2, -2 },
			{  1,  2,  1, -1, -2, -1,  1,  1,  1, -1, -1, -2 },
			{  1,  2,  1, -1, -2, -1, -1,  1,  1,  1, -1, -2 },
			{  1,  2,  1, -1, -2, -2, -1,  1,  1,  1, -1, -1 },
			{  1,  2,  1, -1, -2, -2, -1, -1,  1,  1,  1, -1 },
			{  1,  2,  1, -1, -2, -2, -2, -1, -1,  1,  1,  1 },
			{  1,  1,  1, -1, -2, -2, -2, -2, -1,  1,  2,  1 }
	};
	fill_vector( ret, rows );
	return ret;
}

//M
std::vector< std::vector< float > > std_symM()
{
	std::vector< std::vector< float > > ret;
	const float rows[ ][ 15 ] = {
			{  1,  1,  1, -1, -1, -2, -2, -2, -2, -2, -1, -1,  1,  1,  1 },
			{  1,  2,  1,  1, -1, -1, -2, -2, -2, -1, -1,  1,  1,  2,  1 },
			{  1,  2,  2,  1,  1, -1, -1, -2, -2, -1,  1,  1,  2,  2,  1 },
			{  1,  2,  2,  2,  1,  1, -1, -2, -1, -1,  1,  2,  2,  2,  1 },
			{  1,  2,  2,  2,  2,  1, -1, -1, -1,  1,  1,  2,  2,  2,  1 },
			{  1,  2,  2,  2,  2,  1,  1, -1,  1,  1,  2,  2,  2,  2,  1 },
			{  1,  2,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  2,  1 },
			{  1,  2,  1, -1, -1,  1,  2,  2,  2,  1, -1, -1,  1,  2,  1 },
			{  1,  2,  1, -1, -1,  1,  1,  2,  1,  1, -1, -1,  1,  2,  1 },
			{  1,  2,  1, -1, -1, -1,  1,  2,  1, -1, -1, -1,  1,  2,  1 },
			{  1,  2,  1, -1, -2, -1,  1,  1,  1, -1, -2, -1,  1,  2,  1 },
			{  1,  2,  1, -1, -2, -1, -1,  1, -1, -1, -2, -1,  1,  2,  1 },
			{  1,  2,  1, -1, -2, -2, -1, -1, -1, -2, -2, -1,  1,  2,  1 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  1,  1, -1, -2, -2, -2, -2, -2, -2, -2, -1,  1,  1,  1 }
	};
	fill_vector( ret, rows );
	return ret;
}

//P
std::vector< std::vector< float > > std_symP()
{
	std::vector< std::vector< float > > ret;
	const float rows[ ][ 12 ] = {
			{  1,  1,  1,  1,  1,  1,  1,  1,  1, -1, -1, -1 },
			{  1,  2,  2,  2,  2,  2,  2,  2,  1,  1,  1, -1 },
			{  1,  2,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
			{  1,  2,  1, -1, -1, -1, -1, -1, -1,  1,  2,  1 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -1,  1,  2,  1 },
			{  1,  2,  1, -1, -1, -1, -1, -1, -1,  1,  2,  1 },
			{  1,  2,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
			{  1,  2,  2,  2,  2,  2,  2,  2,  2,  1,  1, -1 },
			{  1,  2,  1,  1,  1,  1,  1,  1,  1,  1, -1, -1 },
			{  1,  2,  1, -1, -1, -1, -1, -1, -1, -1, -1, -2 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -2, -2, -2, -2 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -2, -2, -2, -2 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -2, -2, -2, -2 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -2, -2, -2, -2 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -2, -2, -2, -2 },
			{  1,  2,  1, -1, -2, -2, -2, -2, -2, -2, -2, -2 },
			{  1,  1,  1, -1, -2, -2, -2, -2, -2, -2, -2, -2 }
	};
	fill_vector( ret, rows );
	return ret;
}

//T
std::vector< std::vector< float > > std_symT()
{
	std::vector< std::vector< float > > ret;
	const float rows[ ][ 13 ] = {
			{  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1 },
			{  1,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  1 },
			{  1,  1,  1,  1,  1,  1,  2,  1,  1,  1,  1,  1,  1 },
			{  -1, -1, -1, -1, -1,  1,  2,  1, -1, -1, -1, -1, -1 },
			{  -2, -2, -2, -2, -1,  1,  2,  1, -1, -2, -2, -2, -2 },
			{  -2, -2, -2, -2, -1,  1,  2,  1, -1, -2, -2, -2, -2 },
			{  -2, -2, -2, -2, -1,  1,  2,  1, -1, -2, -2, -2, -2 },
			{  -2, -2, -2, -2, -1,  1,  2,  1, -1, -2, -2, -2, -2 },
			{  -2, -2, -2, -2, -1,  1,  2,  1, -1, -2, -2, -2, -2 },
			{  -2, -2, -2, -2, -1,  1,  2,  1, -1, -2, -2, -2, -2 },
			{  -2, -2, -2, -2, -1,  1,  2,  1, -1, -2, -2, -2, -2 },
			{  -2, -2, -2, -2, -1,  1,  2,  1, -1, -2, -2, -2, -2 },
			{  -2, -2, -2, -2, -1,  1,  2,  1, -1, -2, -2, -2, -2 },
			{  -2, -2, -2, -2, -1,  1,  2,  1, -1, -2, -2, -2, -2 },
			{  -2, -2, -2, -2, -1,  1,  2,  1, -1, -2, -2, -2, -2 },
			{  -2, -2, -2, -2, -1,  1,  2,  1, -1, -2, -2, -2, -2 },
			{  -2, -2, -2, -2, -1,  1,  1,  1, -1, -2, -2, -2, -2 }
	};
	fill_vector( ret, rows );
	return ret;
}

//X
std::vector< std::vector< float > > std_symX()
{
	std::vector< std::vector< float > > ret;
	const float rows[ ][ 13 ] = {
			{  1,  1,  1, -1, -1, -2, -2, -2, -1, -1,  1,  1,  1 },
			{  1,  1,  1,  1, -1, -1, -2, -2, -1,  1,  1,  1,  1 },
			{  -1,  1,  1,  1,  1, -1, -2, -1, -1,  1,  2,  1, -1 },
			{  -1, -1,  1,  2,  1, -1, -1, -1,  1,  1,  1, -1, -1 },
			{  -2, -1,  1,  1,  1,  1, -1, -1,  1,  1,  1, -1, -2 },
			{  -2, -1, -1,  1,  1,  1,  1,  1,  1,  1, -1, -1, -2 },
			{  -2, -2, -1, -1,  1,  2,  2,  2,  1, -1, -1, -2, -2 },
			{  -2, -2, -2, -1,  1,  1,  2,  1,  1, -1, -2, -2, -2 },
			{  -2, -2, -2, -1, -1,  1,  2,  1, -1, -1, -2, -2, -2 },
			{  -2, -2, -2, -1, -1,  1,  2,  1, -1, -1, -2, -2, -2 },
			{  -2, -2, -2, -1,  1,  1,  2,  1,  1, -1, -1, -2, -2 },
			{  -2, -2, -1, -1,  1,  2,  2,  2,  1,  1, -1, -2, -2 },
			{  -2, -1, -1,  1,  1,  1,  1,  1,  2,  1, -1, -1, -2 },
			{  -2, -1,  1,  1,  1,  1, -1,  1,  1,  1,  1, -1, -2 },
			{  -1, -1,  1,  1,  1, -1, -1, -1,  1,  2,  1, -1, -1 },
			{  -1,  1,  1,  1, -1, -1, -2, -1,  1,  1,  1,  1, -1 },
			{  1,  1,  1,  1, -1, -2, -2, -1, -1,  1,  1,  1,  1 },
			{  1,  1,  1, -1, -1, -2, -2, -2, -1, -1,  1,  1,  1 }
	};
	fill_vector( ret, rows );
	return ret;
}

//Y
std::vector< std::vector< float > > std_symY()
{
	std::vector< std::vector< float > > ret;
	const float rows[ ][ 12 ] = {
			{  1,  1,  1, -1, -2, -2, -2, -2, -1,  1,  1,  1 },
			{  1,  1,  1, -1, -1, -2, -2, -1, -1,  1,  1,  1 },
			{ -1,  1,  1,  1, -1, -2, -2, -1,  1,  1,  1, -1 },
			{ -1,  1,  2,  1, -1, -2, -1, -1,  1,  1,  1, -1 },
			{ -1,  1,  1,  1, -1, -1, -1,  1,  1,  1, -1, -1 },
			{ -1, -1,  1,  1,  1, -1, -1,  1,  2,  1, -1, -2 },
			{ -2, -1,  1,  2,  1, -1,  1,  1,  1,  1, -1, -2 },
			{ -2, -1,  1,  1,  1,  1,  1,  2,  1, -1, -1, -2 },
			{ -2, -1, -1,  1,  2,  2,  2,  1,  1, -1, -2, -2 },
			{ -2, -2, -1,  1,  1,  2,  2,  1, -1, -1, -2, -2 },
			{ -2, -2, -1, -1,  1,  2,  1,  1, -1, -2, -2, -2 },
			{ -2, -2, -2, -1,  1,  2,  1, -1, -1, -2, -2, -2 },
			{ -2, -2, -1, -1,  1,  1,  1, -1, -2, -2, -2, -2 },
			{ -2, -2, -1,  1,  1,  1, -1, -1, -2, -2, -2, -2 },
			{ -2, -1, -1,  1,  1,  1, -1, -2, -2, -2, -2, -2 },
			{ -2, -1,  1,  1,  1, -1, -1, -2, -2, -2, -2, -2 },
			{ -2, -1,  1,  1,  1, -1, -2, -2, -2, -2, -2, -2 }
	};
	fill_vector( ret, rows );
	return ret;
}



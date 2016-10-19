#include <stdio.h>
#include "../src/core.hpp"

//////////////////////////////////////////////////////////////////////////////////////////
struct ttest
{
	int on_rx( const byte_t* buf, plen_t len )
	{
		printf( "%s( %p, %u )\n", __func__, buf, len );
		return 0;
	}
};

//////////////////////////////////////////////////////////////////////////////////////////
struct tport_test : public nsTinbom::tport< ttest >
{
	typedef nsTinbom::tport< ttest > tparent;

	tport_test( tparent::trx::treciver& r, tparent::trx::tfunc f ) : tparent( r, f ) {}

	int tx( const byte_t*, plen_t ) { return 0; }

	void rx_run( void )
	{
		uint_t u = 0;
		this->rx( (byte_t*)&u, 1 );
	}
};

//////////////////////////////////////////////////////////////////////////////////////////
int main( int argc, const char* argv[] )
{
	ttest test;

	tport_test port( test, &ttest::on_rx );

	port.rx_run();

	return 0;
}


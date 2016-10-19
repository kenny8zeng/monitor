#ifndef __tinbom_h_fekjidewij2r93r9i90i9u8uyt6tbhbhnj__
#define __tinbom_h_fekjidewij2r93r9i90i9u8uyt6tbhbhnj__

#include "base.hpp"

//////////////////////////////////////////////////////////////////////////////////////
#define MAX_CHILD 8

//////////////////////////////////////////////////////////////////////////////////////
namespace nsTinbom
{
	//////////////////////////////////////////////////////////////////////////////////////
	struct link_head_t
	{
		uint32_t 	start;
		uint8_t 	version;
		uint8_t 	chksum;
		uint16_t 	lenght;

		addr_hw_t   netid;
		addr_hw_t   to;
		addr_hw_t   from;
	};

	//////////////////////////////////////////////////////////////////////////////////////
	struct link_pack_t
	{
		struct link_head_t 	head;
		byte_t* 			data;
	};

	//////////////////////////////////////////////////////////////////////////////////////
	template< typename _reciver >
	struct tevent_rx
	{
		typedef _reciver treciver;
		typedef int ( _reciver::*tfunc )( const byte_t*, plen_t );

		treciver& reciver;
		tfunc func;

		tevent_rx( _reciver& r, tfunc f ) : reciver( r ), func( f ) {}

		int operator()( const byte_t* buf, plen_t len ) {
			return ( reciver.*func )( buf, len );
		}
	};

	//////////////////////////////////////////////////////////////////////////////////////
	template< typename _reciver >
	struct tport
	{
		typedef tevent_rx< _reciver > trx;
		typedef tport< _reciver > tthis;

		tport( typename trx::treciver& r, typename trx::tfunc f ) : rx( r, f ) {}
		virtual int tx( const byte_t*, plen_t ) = 0;

		trx rx;
		addr_hw_t 	addr;
	};

} //namespace nsTinbom

#endif //__tinbom_h_fekjidewij2r93r9i90i9u8uyt6tbhbhnj__


#ifndef __tinbom_h_fekjidewij2r93r9i90i9u8uyt6tbhbhnj__
#define __tinbom_h_fekjidewij2r93r9i90i9u8uyt6tbhbhnj__

#ifdef __cplusplus
extern "C" {
#endif

	//////////////////////////////////////////////////////////////////////////////////////
	typedef char 				int8_t;
	typedef short 				int16_t;
	typedef long 				int32_t;
	typedef int 				int_t;

	typedef unsigned char		uint8_t;
	typedef unsigned short		uint16_t;
	typedef unsigned long		uint32_t;
	typedef unsigned int		uint_t;

	typedef uint8_t 			byte_t;

	//////////////////////////////////////////////////////////////////////////////////////
	typedef union addr_hw_t
	{
		uint32_t 	i32[4];
		uint16_t 	i16[8];
		uint8_t  	i8[16];
	} addr_hw_t, netid_t;

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
		link_head_t 	head;
		byte_t* 		data;
	};

	//////////////////////////////////////////////////////////////////////////////////////
	struct trans_interface_t
	{
		uint_t 	(*rx)( byte_t*, uint_t );
		uint_t 	(*tx)( byte_t*, uint_t );
	};

	//////////////////////////////////////////////////////////////////////////////////////
	void run( void );

#ifdef __cplusplus
}
#endif

#endif //__tinbom_h_fekjidewij2r93r9i90i9u8uyt6tbhbhnj__


#ifndef __base_h_fekjidewij2r93r9i90i9u8uyt6tbhbhnj__
#define __base_h_fekjidewij2r93r9i90i9u8uyt6tbhbhnj__

//////////////////////////////////////////////////////////////////////////////////////
typedef char 				int8_t;
typedef short 				int16_t;
typedef long 				int32_t;
typedef int 				int_t;

typedef unsigned char		uint8_t;
typedef unsigned short		uint16_t;
typedef unsigned long		uint32_t;
typedef unsigned int		uint_t;

typedef unsigned char		byte_t;
typedef uint16_t 			plen_t;

//////////////////////////////////////////////////////////////////////////////////////
typedef union addr_hw_t
{
	uint32_t 	i32[4];
	uint16_t 	i16[8];
	uint8_t  	i8[16];
} addr_hw_t, netid_t;

#endif //__base_h_fekjidewij2r93r9i90i9u8uyt6tbhbhnj__


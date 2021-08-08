#ifndef STD_h_
#define STD_h_
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned int u32;
typedef signed char s8;
typedef signed short int s16;
typedef signed int s32;
typedef float sf32;
typedef double sf64;
/*detection of Error*/
typedef enum {
	Err_ok=0,
	Err_INN_IN,
	Err_INN_OP,
	Err_INN_Nok,

}StdErr_t;
#endif

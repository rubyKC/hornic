/*======================================================
 #simple tool library for 8051/80251 programming

 @auther: xx123123
 @crate: 2022.9.24
 @update:
 ======================================================*/
//type
typedef unsigned char u8;
typedef unsigned int u16;         //same as short
typedef unsigned long int u32;
typedef float f32;              //same as double

//just for fun
#define loop for(;;)
#define structdef typedef struct
/*
structdef type{

}asd
*/

//always be used for some not bit-addressable stuff
#define bset1(addr,bit_pos) addt &= ~(1<<bit_pos)
#define bset0(addr,bit_pos) addr |=  (1<<bit_pos)

//scroll bit pattern (need intrins.h)
#define scroll_bit(size, orientation, val, turn_val) \
    _size##ro##orientation_(val, turn_val)





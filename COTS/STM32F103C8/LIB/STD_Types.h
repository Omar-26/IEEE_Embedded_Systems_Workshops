/**********************************************************************/
/***************    Author         : Omar Ashraf       ****************/
/***************    Version        : 0.1               ****************/
/***************    File Name      : STD_TYPES.h    ****************/
/**********************************************************************/
#ifndef STD_TYPES_H
#define STD_TYPES_H

typedef unsigned char        u8;
typedef unsigned short       u16;
typedef unsigned int         u32;
typedef unsigned long        u64;

typedef signed char          s8;
typedef signed short         s16;
typedef signed int           s32;
typedef signed long          s64;

typedef float                f32;
typedef double               f64;
typedef long double          f96;

typedef u8                   Std_Returntype;

#define E_OK                  (Std_Returntype)1
#define E_NOT_OK              (Std_Returntype)0

#endif // STD_TYPES_H
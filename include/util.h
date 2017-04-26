#ifndef UTIL_H
#define UTIL_H

#include "types.h"

//we copy data from source to destination byte by byte
void memory_copy(char *source, char *dest, int nbytes);
//we set value in destination
void memory_set(uint8 *dest, uint8 val, uint32 len);
//convert int to ascii
void int_to_ascii(int n, char str[]);
//convert string to int
int string_to_int(string ch)  ;
//reserver la meoire
void * malloc(int nbytes);
void reverse(char *str, int len);
//pow
double pow(double x,int n);
int intToStr(int x, char str[], int d);
// Converts a floating point number to string.
void ftoa(float n, char *res, int afterpoint);
#endif

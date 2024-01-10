#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdint.h>

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
unsigned int power(unsigned int two_base, unsigned int power);
int _putchar(char c);
int set_bit(unsigned long int *n, unsigned int index);

#endif

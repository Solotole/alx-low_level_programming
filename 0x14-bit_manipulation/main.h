#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdint.h>

int get_bit(unsigned long int n, unsigned int index);
void print_binary(unsigned long int n);
unsigned int binary_to_uint(const char *b);
int _putchar(char c);
int set_bit(unsigned long int *n, unsigned int index);
unsigned int power(unsigned int two_base, unsigned int power);
int clear_bit(unsigned long int *n, unsigned int index);

#endif

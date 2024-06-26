#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct print - search the func for print_all
 * @c: character to match
 * @f: function for that character.
 */
typedef struct print
{
	char *c;
	void (*f)();
} print;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif

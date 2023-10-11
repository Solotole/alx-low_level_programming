#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - function printing lowercase alphabet
 *
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
}

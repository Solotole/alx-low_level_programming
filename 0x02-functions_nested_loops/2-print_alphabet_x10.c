#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 -  function that prints 10 times the alphabet, in lowercase
 *
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			putchar(i);
		putchar('\n');
	}
}

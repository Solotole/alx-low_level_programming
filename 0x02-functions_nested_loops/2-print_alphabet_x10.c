#include "main.h"

/**
 * print_alphabet_x10 -  function printing 10 times the alphabet, in lowercase
 *
 * Return: return void
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j <= 122; j++)
			_putchar(j);
		putchar('\n');
	}
}

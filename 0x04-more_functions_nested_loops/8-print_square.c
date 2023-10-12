#include "main.h"
#include <stdio.h>

/**
 * print_square - function that prints a square
 * @size: parameter to be considered in printing square
 * Return: return void
 */

void print_square(int size)
{
	int j, i;

	if (size == 0 || size < 0)
		putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			putchar('#');
		putchar('\n');
	}
}

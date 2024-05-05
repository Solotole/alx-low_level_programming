#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line
 * @n:  number of times the character \ should be printed
 *
 * Return: return void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n == 0 || n < 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			if (j == i)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
				_putchar(' ');
		}
	}
}

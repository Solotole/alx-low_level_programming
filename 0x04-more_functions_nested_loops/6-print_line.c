#include "main.h"
#include <stdio.h>

/**
 * print_line -  function that draws a straight line in the terminal
 * @n: parameter to be considered in lines number
 * Return: return void
 */

void print_line(int n)
{
	int j;

	if (n == 0 && n < 0)
		putchar('\n');
	j = 1;
	while (j <= n)
	{
		putchar('_');
		j++;
	}
	putchar('\n');
}

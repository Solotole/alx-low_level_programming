#include "main.h"
#include <stdio.h>

/**
 * print_array - to print n elements of an array
 * @a: string to be printed
 * @n: number of elements to be printed
 *
 * Return: return void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d", a[i]);
			printf(",");
			printf(" ");
		}
		else
			printf("%d", a[i]);
	}
	putchar('\n');
}

#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: pointer to an array
 * @n: number of elements in the array
 *
 * Return: return void
 */

void reverse_array(int *a, int n)
{
	int i, j;

	j = n - 1;
	for (i = j; i >= 0; i--)
	{
		if (i == j && i == j - 1)
		{
			putchar(a[i] + '0');
			putchar(',');
			putchar(' ');
		}
		if (i > 0 && !(i == j && i == j - 1))
		{
			putchar(a[i] + '0');
			putchar(',');
			putchar(' ');
		}
		if (i == 0)
			putchar(a[i] + '0');
	}
	putchar('\n');
}

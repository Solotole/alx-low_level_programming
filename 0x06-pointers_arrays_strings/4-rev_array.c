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
	int i, j, z;

	j = n - 1;
	for (i = 0; i < j; i++)
	{
		z = a[i];
		a[i] = a[n];
		a[n] = z;
	}
}

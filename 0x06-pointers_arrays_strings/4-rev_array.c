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
	int i, temp, j = n - 1;

	i = 0;
	while (i <= j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
		i++;
	}
}

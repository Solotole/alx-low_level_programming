#include "main.h"

/**
 * swap_int -  function that swaps the values of two integers
 * @a: first pointer parameter
 * @b: second pointer parameter
 * Return: return void
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}

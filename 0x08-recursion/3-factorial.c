#include "main.h"
#include <stdio.h>

/**
 * factorial - facton that calculates factorial of a number
 * @n: number to be consider in factorial operation
 *
 * Return: return (-1)-error and t
 */

int factorial(int n)
{
	int t;

	if (n < 0)
		return (-1); /*signifying error*/
	if (n == 0)
		return (1);
	if (n > 0)
		t = n * factorial(n - 1);
	return (t);
	putchar('\n');
}

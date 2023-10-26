#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function that returns power of a value
 * @x: value to be considered in powering
 * @y: power number
 *
 * Return: return (-1) error and z-(y > 0)
 */

int _pow_recursion(int x, int y)
{
	int z;

	if (y < 0)
		return (-1); /*signifying error*/
	if (y == 0)
		return (1);
	if (y > 0)
		z = x * _pow_recursion(x, y - 1);
	return (z);
	putchar('\n');
}

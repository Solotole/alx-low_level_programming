#include "main.h"
#include <math.h>

/**
 * sqrtnum - function returning natural square root
 * @a: number
 * @b: iteration variable
 *
 * Return: return a or -1 if not existing
 */
int sqrtnum(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrtnum(a, b + 1));
}
/**
 * _sqrt_recursion - function returning natural square root of a number
 * @n: number to be square rooted
 *
 * Return: return natural square root
 */

int _sqrt_recursion(int n)
{
	return (sqrtnum(n, 0));
}

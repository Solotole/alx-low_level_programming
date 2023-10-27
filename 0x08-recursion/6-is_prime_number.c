#include "main.h"

/**
 * primenum - function finding for prime number
 * @x: passed number to be confirm for prime number xtics
 * @y: divisor
 *
 * Return: return 0
 */

int primenum(int x, int y)
{
	if (x <= 1 || (x != y && x % y == 0))
	{
		return (0);
	}
	else if (x == y)
	{
		return (1);
	}
	return (primenum(x, y + 1));
}

/**
 * is_prime_number - function returning 1 if prime number and 0 otherwise
 * @n: the number passed
 *
 * Return: return 1 or 0
 */

int is_prime_number(int n)
{
	return (primenum(n, 2));
}

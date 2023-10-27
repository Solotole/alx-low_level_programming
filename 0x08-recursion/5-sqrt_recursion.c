#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - function returning natural square root
 * @n: parameter to be square rooted
 *
 * Return: return a or -1 if not existing
 */

int _sqrt_recursion(int n)
{
	int z, a;

	z = sqrt(n);
	if (n < 0)
		return (-1); /*signifying error*/
	if (n != z * _sqrt_recursion(n)) /*if z is not of type integer*/
		return (-1); /*signifying error*/
	if (n == z * _sqrt_recursion(n)) /*if z is an integer*/
		a = z; /*assigning z to a*/
	return (a);
}

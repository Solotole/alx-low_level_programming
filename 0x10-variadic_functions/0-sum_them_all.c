#include <stdarg.h>
/**
 * sum_them_all - function that returns sum of parameters
 * @n: number of arguments
 *
 * Return: return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list list;

	if (n == 0)
		return (0);
	va_start(list, n);
	i = 0;
	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}

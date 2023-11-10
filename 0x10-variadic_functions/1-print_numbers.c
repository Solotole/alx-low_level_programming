#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers
 * @separator: string printed between numbers
 * @n: number of integers passed
 *
 * Return: void
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, z;

	va_list list;

	va_start(list, n);
	i = 0;
	z = n - 1;
	while (i < n)
	{
		printf("%d", va_arg(list, unsigned int));
		if (i != z && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(list);
}

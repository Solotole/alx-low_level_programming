#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 *
 * Return: return void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i, z;
	char *pstr;
	va_list strings;

	va_start(strings, n);
	i = 0;
	z = n - 1;
	while (i < n)
	{
		pstr = va_arg(strings, char *);
		if (pstr != NULL)
			printf("%s", pstr);
		if (pstr == NULL)
			printf("(nil)");
		if (i != z && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(strings);
}

#include "main.h"
/**
 * _atoi - function that converts sring to number
 * @s: string literal
 *
 * Return: return 0 always
 */
int _atoi(char *s)
{
	int a, b, i, len, e;

	a = 0;
	b = 0;
	len = 0;
	e = 0;

	while (s[len] != '\0')
		len++;
	while (a < len && e == 0)
	{
		i = 0;
		if (s[i] == '+')
			++b;
	}
	return (0);
}

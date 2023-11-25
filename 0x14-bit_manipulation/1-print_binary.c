#include "main.h"
/**
 * power - function calculating for power
 * @b: first passed parameter(2)
 * @c: second passed parameter
 *
 * Return: return result of power
 */
unsigned long int power2(unsigned long int b, unsigned long int c)
{
	unsigned long int result;

	if (c == 0)
		return (1);
	result = b * power2(b, c - 1);
	return (result);
}
/**
 * print_binary - function that prints binary representation of a number
 * @n: value to be converted to binary form
 * Return: return void
 */
void print_binary(unsigned long int n)
{
	unsigned long int a, superscript, x = 0;
	unsigned long int y = 32;

	while (superscript >= x && superscript <= y)
	{
		if (n == 0)
			putchar('0');
		else
		{
			a = power2(2, superscript);
			if (a <= n)
			{
				putchar('1');
				n = n - a;
			}
			if (a > n && a != n)
				putchar('0');
		}
		superscript--;
	}
}

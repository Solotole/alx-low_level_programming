#include "main.h"

/**
 * print_last_digit -  function that prints the last digit of a number
 * @b: number to highligt of its last digit
 *
 * Return: return (q) the last digit of a number
 */

int print_last_digit(int b)
{
	int q;
	int num = b;

	if (b == 0)
	{
		q = b;
	}
	else if (b < 0)
	{
		num = num / 10;
		q = b - (num * 10);
		q *= -1;
	}
	else
	{
		num = b / 10;
		q = b - (num * 10);
	}
	_putchar(q + '0');
	return (q);
}

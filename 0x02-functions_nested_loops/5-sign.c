#include "main.h"
#include <stdio.h>

/**
 * print_sign - function that prints the sign of a number
 * @n: chracter to be verified of it's magnitude
 *
 * Return: returns 1,0,-1 if +ve,equals 0 and -ve
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

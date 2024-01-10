#include "main.h"

/**
 * power - function that calculates the power
 * @two_base: base number-2
 * @power: power considerate
 *
 * Return: returm num=power values
 */
unsigned int power(unsigned int two_base, unsigned int power)
{
	unsigned int number, num;

	number = 1;
	num = 1;
	while (num <= power)
	{
		number = number * two_base;
		num++;
	}
	return (num);
}
/**
 * print_binary - function that prints the binary representation of a number
 * @n: variable containing the number to be converted
 *
 * Return: return void
 */
void print_binary(unsigned long int n)
{
	unsigned int d, confirm;
	char value = 0;

	d = power(2, sizeof(unsigned int) * n - 1);
	while (d != 0)
	{
		confirm = n & d;
		if (confirm == d)
		{
			value = '1';
			_putchar('1');
		}
		else if (value == 1 || d == 1)
			_putchar('0');
		d >>= 1;
	}
}

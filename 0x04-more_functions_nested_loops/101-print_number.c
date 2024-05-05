#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: integer to be concedered
 *
 * Return: return void
 */
void print_number(int n)
{
	unsigned int nums = n;
	if (n < 0)
	{
		_putchar('-');
		nums = -nums;
	}
	if (nums > 9)
		print_number(nums / 10);
	_putchar((nums % 10) + '0');
}

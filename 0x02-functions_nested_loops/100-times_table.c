#include "main.h"
/**
 * greater_100 - function to handle product above 100
 * @result: result of multiplication
 */
void greater_100(int result)
{
	_putchar((result / 100) + '0');
	_putchar(((result / 10) % 10) + '0');
	_putchar((result % 10) + '0');
}
/**
 * less_100 - function to handle less than 100
 * @result: result of multiplication
 */
void less_100(int result)
{
	_putchar((result / 10) + '0');
	_putchar((result % 10) + '0');
}
/**
 * print_times_table -  function that prints the n times table
 * @n: size of of the multiplication table
 *
 * Return: return void
 */
void print_times_table(int n)
{
	int row, column, result;

	if (n < 0 || n > 15)
		return;
	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			result = row * column;
			if (column != 0)
				_putchar(',');
			if (result < 10 && column != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			else if (result < 100 && result >= 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			if (result >= 100)
				_putchar(' ');
			if (result < 10)
				_putchar(result + '0');
			else if (result < 100)
				less_100(result);
			else
				greater_100(result);
		}
		_putchar('\n');
	}
}

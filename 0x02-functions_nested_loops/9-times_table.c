#include "main.h"
/**
 * times_table -  function that prints the 9 times table
 *
 * Return: return void
 */
void times_table(void)
{
	int row, column, result;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			result = row * column;
			if (result <= 9)
			{
				if (column != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(result + '0');
			}
			else
			{
				 _putchar(',');
				 _putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

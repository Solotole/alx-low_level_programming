#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - function that prints half of a string
 * @str: pointer paammeter to be printed
 *
 * Return: return void
 */

void puts_half(char *str)
{
	int i, length = 0, half;

	if (str[0] == '\0')
		return;
	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	if (length % 2 == 0)
		half = length / 2;
	else if (length % 2 != 0)
		half = (length - 1) / 2;
	else if (length == 1)
		_putchar(str[0]);
	else
	{
		for (i = half; i <= length; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

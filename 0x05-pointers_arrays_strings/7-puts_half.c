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

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	half = length / 2;
	for (i = half; i <= length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

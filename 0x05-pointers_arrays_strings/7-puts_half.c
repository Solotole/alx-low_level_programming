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
	int i, length_of_the_string, n, j;

	length_of_the_string = strlen(str);
	n = (length_of_the_string - 1) / 2;
	j = length_of_the_string / 2;
	if (n % 2 == 0)
	{
		for (i = j; i < length_of_the_string; i++)
			putchar(str[i]);
	}
	else
	{
		for (i = n + 1; i <= length_of_the_string; i++)
			putchar(str[i]);
	}
	putchar('\n');
}

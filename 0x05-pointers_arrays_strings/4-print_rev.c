#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - function that prints a string in reverse
 * @s: pointer parameter of the string
 *
 * Return: return void
 */

void print_rev(char *s)
{
	int i, j;
	char *start, *end, temp;

	j = strlen(s);
	start = s;
	end = s;

	for (i = j - 1; i >= 0; i++)
		end++;
	for (i = 0; i < j / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
	}
	putchar('\n');
}

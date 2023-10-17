#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - function that prints every other character of a string
 * @str: pointer parameter string
 *
 * Return: return void
 */

void puts2(char *str)
{
	int i, len, j;

	len = strlen(str);
	j = len - 1;
	for (i = 0; i <= j; i++)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}

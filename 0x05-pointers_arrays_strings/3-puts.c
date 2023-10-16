#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _puts - function that prints a string then a new line
 * @str: pointer parameter
 *
 * Return: return void
 */

void _puts(char *str)
{
	int i;
	int j;

	j = strlen(str);
	for (i = 0; i <= j; i++)
		puts(&str[i]);
}

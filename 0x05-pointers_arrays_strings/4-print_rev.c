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
	int i, len;

	len = strlen(s);
	for (i = len; i >= 0; i--)
		putchar(s[i]);
	putchar('\n');
}

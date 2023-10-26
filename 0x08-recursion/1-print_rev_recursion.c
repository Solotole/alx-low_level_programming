#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - function printing string in reverse
 * @s: string to be printed in reverse
 *
 * Return: return void
 */

void _print_rev_recursion(char *s)
{
	int i = 0, j;

	j = strlen(s) - 1;
	if (i == 0)
		putchar(s[0]);
	for (i = j; i > 0; i++)
		putchar(s[i]);
}

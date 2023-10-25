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
	int i, j;

	j = strlen(s) - 1;
	if (i == 0)
		putchar(s[0]);
	s = s[j - 1];
	putchar(s[j] + _print_rev_recursion(s));
}

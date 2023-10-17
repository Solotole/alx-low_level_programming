#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string
 * @s: pointer parameter for sting reversal
 *
 * Return: return void
 */

void rev_string(char *s)
{
	int i = 9; /*initialize to array last idex*/

	while (i >= 0)
		putchar(s[i]);
	putchar('\n');
}

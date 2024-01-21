#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: pointer parameter for sting reversal
 *
 * Return: return void
 */

void rev_string(char *s)
{
	int i = 0, j, count = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	for (j = count; j >=0; j--)
	{
		putchar(s[j]);
	}
	putchar('\n');
}

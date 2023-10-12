#include "main.h"
#include <stdio.h>

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 * Return: Return void
 */

void more_numbers(void)
{
	char i, j;

	for (i = '0'; i <= '9'; i++)

	{
		j = '0';
		while (j <= '14')
		{
			putchar(j);
			j++;
		}
		putchar('\n');
	}
}

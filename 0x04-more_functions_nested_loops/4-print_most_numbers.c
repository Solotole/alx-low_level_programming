#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - function printing numbers from 0 to 9 without 2 & 4
 * Return: return void
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
			putchar(c);
	}
}

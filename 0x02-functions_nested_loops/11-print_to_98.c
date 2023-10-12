#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -  function that prints all natural numbers from n to 98
 * @n: the passed value
 * Return: Return j
 */

void print_to_98(int n)
{
	int j, k;

	j = n;

	if (j <= 98)
	{
		while (j <= 98)
		{
			if (j < 98)
			{
				printf("%d", j);
				printf(",");
				printf(" ");
			}
			else if (j == 98)
				printf("%d", j);
			else
				printf(" ");
			j++;
		}
	}
	else
	{
		for (k = n; k >= 98; k--)
		{
			if (k > 98)
			{
				printf("%d", k);
				printf(",");
				printf(" ");
			}
			else if (k == 98)
				printf("%d", k);
			else
				printf(" ");
		}
	}
	putchar('\n');
}

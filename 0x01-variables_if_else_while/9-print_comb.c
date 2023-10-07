#include <stdio.h>

/**
 * main - entry point in printing
 *
 * Return: always (0)
 */

int main(void)
{
	int n, a = 9;

	for (n = 0; n <= a; n++)
	{
		putchar(n + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}

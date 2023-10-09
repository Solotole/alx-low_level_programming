#include <stdio.h>

/**
 * main - entry point of program
 *
 * Return: always return 0
 *
 */

int main(void)
{
	int a;

	for (a = 0; a <= 10; a++)
		putchar(a + '0');
	putchar('\n');
	return (0);
}

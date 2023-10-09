#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always return 0
 */

int main(void)
{
	char i = 'a';
	char j = 'A';

	while (j <= 'Z')
	{
		while (i <= 'z')
		{
			putchar(i);
			i++;
		}
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}

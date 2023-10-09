#include <stdio.h>

/**
 * main - main entry point to program
 *
 * Return: always return 0
 *
 */

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (a <= 7)
	{
		while (b <= 8)
		{
			while (c <= 9)
			{
				if (a < b && b < c)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					if (!(a == 7 && b == 8 && c == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			c = 0;
			b++;
		}
		b = 0;
		a++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - main entry point of code
 *
 * Return: return void
 */
int main(void)
{
	int a, b, i, new_number;

	for (i = 0; i < 50; i++)
	{
		if (i == 0)
		{
			a = 1; /*offering 1 as first number*/
			printf("%d, ", a);
		}
		else if (i == 1)
		{
			b = 2; /*offering 2 as second number*/
			printf("%d, ", b);
		}
		else
		{
			if (i > 1 && i != 49)
			{
				new_number = a + b;
				printf("%d, ", new_number);
			}
			else if (i > 1 && i == 49)
				printf("%d\n", new_number);
			a = b;
			b = new_number;
		}
	}
	return (0);
}

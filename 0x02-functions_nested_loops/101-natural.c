#include <stdio.h>
/**
 * main - main entry point of program
 *
 * Return: return void
 */
int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum = 0 + i;
	}
	printf("%d\n", sum);
	return (0);
}

#include "main.h"
/**
 * main - main entry point of program
 *
 * Return: return void
 */
int main(void)
{
	int i, num, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			num = i;
			sum += num;
		}
		if (i % 5 == 0)
		{
			num = i;
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}

#include "main.h"
/**
 * main - main entry of the program
 * printing first 50 including 1 and 2
 * Return: return 0 on success
 */
int main(void)
{
	unsigned long i = 0, a, b, result;

	a = 1;
	b = 2;
	printf("%lu, ", a);
	printf("%lu, ", b);
	while (i < 48)
	{
		result = a + b;
		if (i != 47)
			printf("%lu, ", result);
		else
			printf("%lu\n", result);
		a = b;
		b = result;
		i++;
	}
	return (0);
}

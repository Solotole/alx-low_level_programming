#include "main.h"
/**
 * main - main entry of the program
 * printing first 50 including 1 and 2
 * Return: return 0 on success
 */
int main(void)
{
	int i = 0, a, b, result;

	a = 1;
	b = 2;
	printf("%d, ", a);
	printf("%d, ", b);
	while (i < 48)
	{
		result = a + b;
		if (i != 47)
			printf("%d, ", result);
		else
			printf("%d\n", result);
		a = b;
		b = result;
		i++;
	}
	return (0);
}

#include "main.h"
/**
 * main - main entry of the program
 *
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
		else if (i == 47)
			printf("%d\n", result);
		a = b;
		b = result;
		i++;
	}
	return (0);
}

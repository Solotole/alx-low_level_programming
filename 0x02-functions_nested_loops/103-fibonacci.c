#include "main.h"
/**
 * main - main entry of the program
 * printing sum of fibonacci numbers less that 4 million
 * Return: return 0 on success
 */
int main(void)
{
	int a, b, result;
	int sum = 0;

	a = 1;
	b = 2;
	result = 0;
	while (result <= 4000000)
	{
		result = a + b;
		if (result % 2 == 0)
			sum += result;
		a = b;
		b = result;
	}
	sum += 2;
	printf("%d\n", sum);
	return (0);
}

#include "3-calc.h"
/**
 * main - main entry point to the program
 * @ac: arguments count
 * @argv: arguments vector
 *
 * Return: return 0 on success
 */
int main(int ac, char *argv[])
{
	int result, a, b;
	char *operator;
	int (*operation)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operator = argv[2];
	if ((operator[0] == '/' || operator[0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	operation = get_op_func(operator);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = operation(a, b);
	printf("%d\n", result);
	exit(0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry point of the program
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: return (0)
 */

int main(int argc, char **argv)
{
	int product, i, j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		product = i * j;
		printf("%d\n", product);
	}
	if (!(argc == 3))
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

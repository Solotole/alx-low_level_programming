#include <stdio.h>

/**
 * main - main entry point of program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: return (0)
 */

int main(int argc, char **argv)
{
	int i = argc;

	(void)argv;

	if (i == argc)
	{
		i--;
		printf("%d\n", i);
	}
	return (0);
}

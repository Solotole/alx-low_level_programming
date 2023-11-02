#include <stdio.h>

/**
 * main - main entry point to the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always return (0)
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

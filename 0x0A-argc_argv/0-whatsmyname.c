#include <stdio.h>

/**
 * main - main entry point
 * @argc: argument count
 * @argv: string argument vector
 *
 * Return: always return (0)
 */

int main(int argc, char *argv[])
{
	int l;

	l = argc - 1;
	printf("%s\n", argv[l]);
	return (0);
}

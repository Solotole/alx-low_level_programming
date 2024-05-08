#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - main entry point of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: return 0 on success
 */
int main(int argc, char **argv)
{
	int i, nums, result = 0, j;

	if (argc == 1)
		printf("%d\n", result);
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			nums = atoi(argv[i]);
			result += nums;
		}
		printf("%d\n", result);
	}
	return (0);
}

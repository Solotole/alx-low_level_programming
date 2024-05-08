#include <stdlib.h>
#include <stdio.h>
/**
 * main - main entry point of the program
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: return 0 on success
 */
int main(int argc, char **argv)
{
	int i, coin, count = 0;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coin = atoi(argv[1]);
	if (atoi(argv[1]) < 0)
		printf("%d\n", 0);
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (coin / cents[i])
			{
				count += coin / cents[i];
				if (coin % cents[i])
					coin %= cents[i];
				else
					break;
			}
		}
		printf("%d\n", count);
	}
	return (0);
}

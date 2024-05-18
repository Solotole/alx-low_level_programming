#include "main.h"
/**
 * count - function to count argument's length
 * @av: argument vector
 *
 * Return: return argument length + 1 for the '\n'
 */
int count(char *av)
{
	int i, length = 0;

	for (i = 0; av[i] != '\0'; i++)
		length++;
	return (length + 1); /*1 extra for the '\n'*/
}
/**
 * argstostr - function concatenates all the arguments
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: return the pointer to the string
 */
char *argstostr(int ac, char **av)
{
	int i, k, length = 0, position;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		length += count(av[i]);
	ptr = malloc(sizeof(char) * (length + 1));
	if (ptr == NULL)
		return (NULL);
	position = 0;
	k = 0;
	while (k < ac)
	{
		for (i = 0; av[k][i] != '\0'; i++)
			ptr[position++]  = av[k][i];
		ptr[position++] = '\n';
		k++;
	}
	ptr[position++] = '\0';
	return (ptr);
}

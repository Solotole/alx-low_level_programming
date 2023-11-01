#include "main.h"
#include <stdlib.h>

/**
 * create_array - function creaing araray of characters
 * @size: size to be considered
 * @c: character input
 *
 * Return: return NULL (success) and *ptr (fail)
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *)malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	if (!(size == 0))
	{
		for (i = 0; i <= size; i++)
			ptr[i] = (int)c;
	}
	return (ptr);
	free(ptr);
}

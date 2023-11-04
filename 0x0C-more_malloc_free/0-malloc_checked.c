#include "main.h"

/**
 * malloc_checked - function that allocates memory
 * @b: bytes to be allocated
 *
 * Return: return void
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	else
		return (ptr);
}

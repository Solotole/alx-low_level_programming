#include "main.h"
/**
 * _calloc - calloc function replica
 * @nmemb: number of indexes of the newly allocated arrays
 * @size: size of 1 index
 *
 * Return: return NULL if it fails and pointer to newly
 * allocated array upon success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i = 0, total;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);

	if (ptr == NULL)
		return (NULL);
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

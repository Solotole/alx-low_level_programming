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
	void *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc((nmemb * size) + 1);
	if (ptr == NULL)
		return (NULL);
	while (i < nmemb)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

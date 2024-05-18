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
	void *ptr1;
	char *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ptr = ptr1;
	while (i < nmemb)
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}

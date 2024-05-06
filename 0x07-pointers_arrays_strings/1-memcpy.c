#include "main.h"
/**
 * _memcpy -  function that copies memory area
 * @dest: destination pointer
 * @src: source destination
 * @n: number of bytes to to copy into the destination
 *
 * Return: return the destination pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	if (src[0] == '\0')
		return (NULL);
	for (j = 0;  j < n; j++)
		dest[j]= src[j];
	return (dest);
}

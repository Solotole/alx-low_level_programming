#include "main.h"

/**
 * _memcpy - function copying n bytes from src to dest
 * @src: source pointer parameter
 * @dest: destination pointer parameter
 * @n: number of bytes to be copied
 *
 * Return: return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = n;

	i = 0;
	for (; i <  j; i++)
	{
		dest[i] = src[j];
		n--;
	}
	return (dest);
}

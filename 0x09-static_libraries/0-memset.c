#include "main.h"

/**
 * _memset - function copying number of characters to a pointer
 * @b: caharcter to be copied
 * @n: number of bytes to be allocated
 *
 * Return: return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

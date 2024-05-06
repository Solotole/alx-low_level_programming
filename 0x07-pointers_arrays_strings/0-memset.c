#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: buffer to fill the characters
 * @b: character to fill in the buffer
 * @n: number of bytes to fill in the buffer
 *
 * Return: return the filled buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

#include "main.h"

/**
 * _strpbrk - function searching string for set of bytes
 * @s: string to be scanned
 * @accept: input string
 *
 * Return: return (s)
 */

char *_strpbrk(char *s, char *accept)
{
	int l;

	while (*s)
	{
		for (l = 0; accept[l]; l++)
		{
			if (*s == accept[l])
					return (s);
		}
	s++;
	}
	return ('\0');
}

#include "main.h"

/**
 * _strchr - function that scans for first occurance of char
 * @s: string to be scanned
 * @c: character being scanned for
 *
 * Return: always 0 for failed search
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

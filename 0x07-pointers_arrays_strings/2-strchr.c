#include "main.h"
/**
 * _strchr - function  that locates a character in a string
 * @s: string to find the character
 * @c: character to find
 *
 * Return: return NULL on failure of the pointer
 * on success
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}

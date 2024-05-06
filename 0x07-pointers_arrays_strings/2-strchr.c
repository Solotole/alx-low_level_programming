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
	int i;
	char *ptr = NULL;

	if (s == NULL)
		return (NULL);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
		{
			ptr = s + i;
			break;
		}
		else
			continue;
	}
	return (ptr);
}

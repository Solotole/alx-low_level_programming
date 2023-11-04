#include "main.h"

/**
 * string_nconcat - function that concatenates 2 strings
 * @s1: first input string
 * @s2: second input string
 * @n: number of s2's bytes to be copied
 *
 * Return: return ptr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	ptr = malloc(sizeof(char) * (len1 + len2) + 1);
	if (ptr == NULL)
		return (NULL);
	if (n < len2)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j < len1; j++)
				ptr[j] = s1[j];
			ptr[len1 + i] = s2[i];
		}
	}
	if (n > len2 || n == len2)
	{
		for (i = 0; s2[i] == '\0'; i++)
		{
			for (j = 0; j < len1; j++)
				ptr[j] = s1[j];
			ptr[len1 + i] = s2[i];
		}
	}
	return (ptr);
}

#include "main.h"

/**
 * leet -  function that changes all lowercase letters of a string to uppercase
 * @s: strng to be changed
 *
 * Return: return s
 */

char *leet(char *s)
{
	int i, j;
	char a1[] = "aAeEoOtTlL";
	char a2[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a1[j])
				s[i] = a2[j];
		}
	}
	return (s);
}

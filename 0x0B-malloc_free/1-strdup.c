#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - functio that returns a duplicate pointer
 * @str: string input
 *
 * Return: return *ptr(success) and NULL(fail)
 */

char *_strdup(char *str)
{
	int len, plen;
	char *ptr;

	len = strlen(str);
	ptr = (char *)malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);

	if (!(str == NULL))
	{
		int i;

		for (i = 0; i <= len; i++)
		{
			if (i < len)
				ptr[i] = str[i];
			if (i == len)
				ptr[i] = '\0';
		}
	}
	plen = strlen(ptr);
	if (plen != len)
		return (NULL);
	return (ptr);
	free(ptr);
}

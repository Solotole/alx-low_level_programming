#include "main.h"

/**
 * _strdup - functio that returns a duplicate pointer
 * @str: string input
 *
 * Return: return *ptr(success) and NULL(fail)
 */

char *_strdup(char *str)
{
	int len, i;
	char *ptr;

	if (str == NULL)
		return (NULL);
	len = strlen(str);

	ptr = (char *)malloc(sizeof(char) * len + 1);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		ptr[i] = str[i];
	return (ptr);
}

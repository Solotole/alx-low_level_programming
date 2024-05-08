#include "main.h"
/**
 * str_concat - function mallocs memory and concatenates
 * @s1: first string pointer
 * @s2: second string pointer
 *
 * Return: return NULL on failure and the the pointer
 * on success
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr, size1 = 0, size2 = 0;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		size1++;
	for (i = 0; s2[i] != '\0'; i++)
		size2++;
	ptr = malloc(size1 + size2 + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		ptr[i] = s1[i];
	for (i = size1; i < size2 + size1; i++)
		ptr[i] = s2[i - size1];
	ptr[size1 + size2] = '\0';
	return (ptr);
}

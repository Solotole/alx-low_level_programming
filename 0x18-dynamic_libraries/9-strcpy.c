#include "main.h"
#include <string.h>

/**
 * _strcpy - function copping a string from a pointer to another
 * @dest: destination pointer array
 * @src: source pointer array
 * Return: return dest
 */

char *_strcpy(char *dest, char *src)
{
	dest = strcpy(dest, src);
	return (dest);
}

#include "main.h"
#include <string.h>

/**
 * *_strcat - function that concatenantes 2 strings
 * @dest: destination pointer string
 * @src: source pointer string
 *
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	dest = strcat(dest, src);
	return (dest);
}

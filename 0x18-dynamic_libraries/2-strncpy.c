#include "main.h"
#include <string.h>

/**
 * *_strncpy - function that copies a string to another
 * @dest: destination pointer string
 * @src: source pointer string
 * @n: space in dest for n bytes to be transfered
 *
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	dest = strncpy(dest, src, n);
	return (dest);
}

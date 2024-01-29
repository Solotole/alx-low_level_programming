#include "main.h"
#include <string.h>

/**
 * *_strncat - functions that concatenates
 * @dest: destination pointer string
 * @src: source pointer string
 * @n: bytes to be used from src
 *
 * Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	dest = strncat(dest, src, n);
	return (dest);
}

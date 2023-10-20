#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13
 * @n: pointer to string parameter
 *
 * Return: return n
 */
char *rot13(char *n)
{
	int i, j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmonpqrstuvwxyz";
	char data2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == data1[j])
			{
				n[i] = data2[j];
				break;
			}
		}
	}
	return (n);
}

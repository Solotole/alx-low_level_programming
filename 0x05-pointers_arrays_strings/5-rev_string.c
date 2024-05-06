#include "main.h"
/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int length = 0;
	int start, end;
	char temp;
	
	while (s[length] != '\0')
		length++;
	/* Initialize start and end indices */
	start = 0;
	end = length - 1;
	/* Reverse the string */
	while (start < end)
	{
		/* Swap characters */
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		/* Move towards the middle */
		start++;
		end--;
	}
}

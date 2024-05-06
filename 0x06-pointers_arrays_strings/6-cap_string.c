#include "main.h"
/**
 * uppercase - function to capitalize a character
 * @ch: character to convert
 * Return: return the capitalized character
 */
char uppercase(char ch)
{
	char capital = ch;

	if (ch >= 'a' && ch <= 'z')
		capital = ch - 32;
	return (capital);
}
/**
 * cap_string - function to capitalize considering
 * some elements
 * @str: pointer to capitalize
 * Return: return a capitalized pointer
 */
char *cap_string(char *str)
{
	int i, j;
	char separators[] = {'\n', '\t', ' ', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for  (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] = uppercase(str[i + 1]);
				break;
			}
			else
				continue;
		}
	}
	return (str);
}

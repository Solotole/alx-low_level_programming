#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: pointer containing name of the file
 * @text_content: pointer containing what is to be written in the file
 *
 * Return: return 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, r, num;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (num = 0; text_content[num]; num++)
		;

	r = write(file, text_content, num);
	if (r == -1)
		return (-1);
	close(file);
	return (1);
}

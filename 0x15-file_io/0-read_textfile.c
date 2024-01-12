#include "main.h"

/**
 * read_textfile - function that reads a text file and prints to standardoutput
 * @filename: file to be read
 * @letters: number of letters to be read
 *
 * Return: return letters upon success and 0
 * fail to open, read, write and memory allocation
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w;
	char *container;
	int file;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	container = malloc(sizeof(char) * letters);
	if (container == NULL)
	{
		close(file);
		return (0);
	}
	r = read(file, container, letters);
	close(file);
	if (r == -1)
	{
		free(container);
		return (0);
	}
	w = write(STDOUT_FILENO, container, r);
	free(container);
	if (w != r)
		return (0);
	return (w);
}

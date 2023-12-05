#include "main.h"
/**
 * read_textfile - function that reads and writes a file
 * @filename: pointer to a file
 * @letters: number of characters to be printed
 *
 * Return: returns number of printed characters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t b, i;
	char *ptr;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
	{
		close(fd);
		return (0);
	}
	i = read(fd, ptr, letters);
	close(fd);
	if (i == -1)
	{
		return (0);
		free(ptr);
	}
	b = write(STDOUT_FILENO, ptr, letters);
	free(ptr);
	if (b != i)
		return (0);
	return (b);
}

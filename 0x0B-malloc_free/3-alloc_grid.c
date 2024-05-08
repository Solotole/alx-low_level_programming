#include "main.h"
/**
 * alloc_grid - function to create 2-D array and initializing
 * with 0
 * @width: width of the 2-D array
 * @height: height of the 2-D array
 *
 * Return: return the pointer to the 2-D array
 */
int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int) * height);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		ptr[i] = malloc(sizeof(int) * width);
	for (i = 0; i < height; i++)
	{
		if (ptr[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}

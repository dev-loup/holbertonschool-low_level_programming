#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - returns a pointer to **
 * @width: the width of the matrix
 * @height: the height of the matrix
 * Return: the pointer of the matrix or NULL on fail
 */
int **alloc_grid(int width, int height)
{
	int **grid = NULL;
	int counter;
	int scounter;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * (sizeof(int *)));
	for (counter = 0; counter < height; counter++)
	{
		grid[counter] = malloc(width * (sizeof(int)));
		for (scounter = 0; scounter < width; scounter++)
		{
			if (grid[counter] == NULL)
			{
				free(grid);
				return (NULL);
			}
			grid[counter][scounter] = 0;
		}
	}
	return (grid);
}

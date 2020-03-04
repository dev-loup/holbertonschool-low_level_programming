#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - free an array of arrays
 * @grid: the grid to wipe
 * @height: the size of array of arrays
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int counter;

	for (counter = 0; counter < height; counter++)
	{
		free(grid[counter]);
	}
	free(grid);
}

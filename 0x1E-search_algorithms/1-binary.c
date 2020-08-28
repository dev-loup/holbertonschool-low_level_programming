#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * binary_search - look for an integer with binary search algo
  * @array: list of integers
  * @size: size of the array
  * @value: value to search
  * Return: index where value is located or -1 on error
  */
int binary_search(int *array, size_t size, int value)
{
	size_t ind_end = size - 1;
	size_t ind_start = 0;
	size_t run = 0;

	if (!value || !array)
		return (-1);
	while (ind_end >= ind_start)
	{
		printf("Searching in array: ");
		for (run = ind_start; run <= ind_end; run++)
		{
			if ((run - ind_start) > 0)
				printf(", ");
			printf("%i", array[run]);
		}
		printf("\n");
		run = ((ind_end - ind_start) / 2) + ind_start;
		if (array[run] == value)
			return (run);
		else if (array[run] > value)
			ind_end = run - 1;
		else
			ind_start = run + 1;
	}
	return (-1);
}


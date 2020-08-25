#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * linear_search - look for an integer with linear search algo
  * @array: list of integers
  * @size: size of the array
  * @value: value to search
  * Return: index where value is located or -1 on error
  */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	while (array && index < size)
	{
		printf("Value checked array[%li] = [%i]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		else
			index++;
	}
	return (-1);
}


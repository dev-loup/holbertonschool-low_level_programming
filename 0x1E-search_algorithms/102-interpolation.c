#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * interpolation_search - look for an integer with binary search algo
  * @array: list of integers
  * @size: size of the array
  * @value: value to search
  * Return: index where value is located or -1 on error
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	size_t end = size - 1;
	size_t low = 0;

	if (!array || !value)
		return (-1);
	while (array[end] != array[low])
	{
		pos = low + (((double)(end - low)
			/ (array[end] - array[low])) * (value - array[low]));
		if (value > array[end] || value < array[low])
		{
			printf("Value checked array [%li] is out of range\n", pos);
			break;
		}
		printf("Value checked array [%li] = [%i]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			end = pos - 1;
		sleep(1);
	}
	return (-1);
}


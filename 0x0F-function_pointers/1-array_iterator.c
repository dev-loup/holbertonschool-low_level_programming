#include "function_pointers.h"
/**
 * array_iterator - iterates an array to send values.
 * @array: array to iterate
 * @action: function to do
 * @size: the quantity of values to print
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int counter;

	if (array[size] != 00)
		for (counter = 0; counter <= size; counter++)
			action(array[counter]);
}

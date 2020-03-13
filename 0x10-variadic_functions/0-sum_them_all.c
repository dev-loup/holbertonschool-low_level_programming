#include "variadic_functions.h"

/**
 * sum_them_all - searches for an integer.
 * @n: number type variable
 *
 * Return: 0 on NULL
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int counter;
	int result;

	if (n == 0)
		return (0);
	result = 0;
	va_start(numbers, n);
	for (counter = 0; counter < n; counter++)
	{
		result += va_arg(numbers, int);
	}
	va_end(numbers);
	return (result);
}

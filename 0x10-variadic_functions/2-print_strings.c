#include "variadic_functions.h"

/**
 * print_strings- print a list of given strings.
 * @n: number of words
 * @separator: separator of words
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int counter;
	char *sequence;

	va_start(string, n);
	for (counter = 0; counter < n; counter++)
	{
		sequence = va_arg(string, char *);
		if (*sequence == 00)
			printf("(Nil)");
		else
			printf("%s", sequence);
	if (counter < n - 1 && separator)
		printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}

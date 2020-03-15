#include "variadic_functions.h"

/**
 * c_f - function to print chars
 * @ag: va_list macro arguments
 */
void c_f(va_list ag)
{
	printf("%c", va_arg(ag, int));
}

/**
 * i_f - function to print integers
 * @ag: va_list macro arguments
 */
void i_f(va_list ag)
{
	printf("%i", va_arg(ag, int));
}

/**
 * f_f - function to print floats
 * @ag:  va_list macro arguments
 */
void f_f(va_list ag)
{
	printf("%f", (float)va_arg(ag, double));
}

/**
 * s_f - function to print strings
 * @ag: va_list macro arguments
 */
void s_f(va_list ag)
{
	char *check = va_arg(ag, char *);

	if (check == NULL)
		check = "(nil)";
	printf("%s", check);
}

/**
 * print_all - function to print data with specific format
 * @format: type format to print
 */
void print_all(const char * const format, ...)
{
	form arr[] = {
		{"c", c_f},
		{"i", i_f},
		{"f", f_f},
		{"s", s_f},
		{NULL, NULL}
	};
	int i = 0;
	int j = 0;
	char *sep = "";
	va_list ag;

	va_start(ag, format);
	while (format[j] && format)
	{
		while (j < 4)
		{
			if (format[j] == arr[i].fmt[0])
			{
				printf("%s", sep);
				arr[i].f(ag);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ag);
}

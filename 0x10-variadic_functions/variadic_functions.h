#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct form_t - struct
 * @fmt: char
 * @f: pointer to function
 */
typedef struct form_t
{
	char *fmt;
	void (*f)(va_list ag);
} form;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif

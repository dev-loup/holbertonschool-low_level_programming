#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name: received name to pass
 * @f: pointer to function
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

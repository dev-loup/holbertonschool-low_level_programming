#include "holberton.h"
#include <stdio.h>

/**
 * set_string - set the value of a pointer to a char
 * @s: char to edit
 * @to: the value to take
 * Return: no returns
 */
void set_string(char **s, char *to)
{
	*s = to;
}

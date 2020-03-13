#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - choose the correct operation.
 *
 * @s: pointer to function
 * Return: NULL on failure op_func on success
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (*s != *(ops[i].op) && i < 5)
		i++;
	return (ops[i].f);
}

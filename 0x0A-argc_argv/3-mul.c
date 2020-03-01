#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: counter to arguments input
 * @argv: string of numbers to multiply
 *
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int r;

	if (argv[3] == '\0')
	{
		r = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", r);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

#include <stdio.h>

/**
 * main - prints the arguments
 * @argc: counter to arguments input
 * @argv: string of arguments
 *
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int counter;

	for (counter = 0; argv[counter] != '\0'; counter++)
		printf("%s\n", argv[counter]);
	return (0);
}

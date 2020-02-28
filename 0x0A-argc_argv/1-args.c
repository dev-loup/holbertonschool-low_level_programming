#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: counter to arguments input
 * @argv: string of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the arguments
 * @argc: counter to arguments input
 * @argv: string of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int counter;
	int add;
	int reserve;

	add = 0;
	for (counter = 1; argv[counter] != argv[argc]; counter++)
	{
		reserve = (atoi(argv[counter]));
		if (reserve == 0 && *argv[counter] == '0')
		{
			add += reserve;
			break;
		}
		if (reserve > 0)
			add += reserve;
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", add);
	return (0);
}

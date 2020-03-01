#include <stdio.h>
#include <stdlib.h>

/**
 * main - counts the coins quantity from a cash value
 * @argc: counter to arguments input
 * @argv: string of arguments
 *
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int cash;
	int coins[5] = {25, 10, 5, 2, 1};
	int cnselector;
	int exchange;

	exchange = 0;
	if (argv[2] == '\0')
		cash = atoi(argv[1]);
	else
	{
		printf("Error\n");
		return (1);
	}
	if (cash < 0)
	{
		printf("%d\n", exchange);
		return (0);
	}
	for (cnselector = 0; cnselector <= 5; cnselector++)
	{
		if (cash % coins[cnselector] == 0)
		{
			exchange += cash / coins[cnselector];
			printf("%d\n", exchange);
			return (0);
		}
		else
		{
			exchange += cash / coins[cnselector];
			cash = cash % coins[cnselector];
		}
	}

	return (0);
}

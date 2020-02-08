#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
int a;

for (a = 1; a < 100 ; a++)
{
	putchar((i / 10) + '0');
	putchar((i % 10) + '0');
	putchar(' ');
	putchar((a / 10) + '0');
	putchar((a % 10) + '0');
	putchar(',');
	putchar(' ');
	if ( a == 99)
	{
		i++;
		a = i + 1;
	}
	if (i == 98)
		a = i;
}
putchar('\n');
return (0);
}

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
int i;
int a;

for (a = 1; a < 100 ; a++)
{
for ( i = 0; i < a ; i++)
{
	if ( i < a)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar(' ');
		putchar((a / 10) + '0');
		putchar((a % 10) + '0');
		putchar(',');
		putchar(' ');
	}
}
}
putchar('\n');
return (0);
}

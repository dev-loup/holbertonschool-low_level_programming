#include <stdio.h>

/**
 * main - Fizz multiples of three Buzz multiples of five
 *
 *
 * Return: On success 0.
 *
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		((a % 3) == 0) ?
		  (((a % 5) == 0) ? (printf("FizzBuzz")) : (printf("Fizz"))) :
		  (((a % 5) == 0) ? (printf("Buzz")) : (printf("%i", a)));
		(a < 100) ? (putchar(' ')) : (putchar('\n'));
	}
	return (0);
}

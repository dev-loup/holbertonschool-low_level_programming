#include "holberton.h"

/**
 * print_chessboard - prints an non playable chessboard
 * @a: the board to print
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int ver;
	int hor;

	ver = 0;

	for (hor = 0; hor != 8; hor++)
	{
		for (ver = 0; ver != 8; ver++)
		{
			_putchar(a[hor][ver]);
		}
		_putchar('\n');
	}
}

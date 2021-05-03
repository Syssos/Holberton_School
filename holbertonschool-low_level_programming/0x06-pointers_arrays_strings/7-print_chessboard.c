#include "holberton.h"
/**
 * print_chessboard - Prints a chessboard
 * @a: chessboard array
**/
void print_chessboard(char (*a)[8])
{
	int x, c;

	for (x = 0; x < 8; x++)
	{
		for (c = 0; c < 8; c++)
			_putchar(a[x][c]);
		_putchar('\n');
	}
}

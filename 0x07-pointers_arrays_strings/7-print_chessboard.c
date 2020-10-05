#include "holberton.h"

/**
 * print_chessboard - print chessboard
 * @a: input chars
 *
 * Description: print_chessboard
 * Returns: always 0
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}

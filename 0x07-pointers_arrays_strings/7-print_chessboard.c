#include "main.h"

/**
 * print_chessboard - entry point
 * @a: array
 * return: always 0 (success)
 */
void print_chessboard(char (*a)[8])
{
	int j, n;

	for (j = 0; j < 8; j++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[j][n]);
		_putchar('\0');
	}
}

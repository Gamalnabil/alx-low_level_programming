#include "main.h"

/**
 * print_chessboard - function that prints chessboard
 * @a: input value
*/
void print_chessboard(char (*a)[8])
{
	int t, b;

	for (t = 0; t < 8; t++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[t][b]);
		}
		_putchar('\n');
	}
}

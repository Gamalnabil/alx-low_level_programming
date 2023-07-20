#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: numbers of diagonals
*/
void print_diagonal(int n)
{
	int p, s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (p = 1; p <= n; p++)
		{
			for (s = 1; s <= p; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

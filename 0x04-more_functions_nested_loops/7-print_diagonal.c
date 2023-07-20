#include "main.h"

/**
 * print_diagonal - print line from diagonals
 * @n: value of the line
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
		for (p = 1; p < n; p++)
		{
			for (s = 1; s < n; s++)
			{
				if (s == p)
				{
					_putchar('\\');
				}
				else if (s < p)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}

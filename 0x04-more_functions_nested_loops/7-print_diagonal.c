#include "main.h"

/**
 * print_diagonal - this function print line with diagonals
 * @n: is the number of diagonals
 * Return: always new line
*/
void print_diagonal(int n)
{
	int z;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	else
	{
		for (z = 0; z <= n; z++)
		{
			for (j = 0; j <= z; z++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	}
}

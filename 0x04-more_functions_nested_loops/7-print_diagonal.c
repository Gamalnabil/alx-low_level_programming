#include "main.h"

/**
 * print_diagonal - this function print line with diagonals
 * @n: is the number of diagonals
 * Return: always new line
*/
void print_diagonal(int n)
{
	int z;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (z = 0; z < n; z++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}

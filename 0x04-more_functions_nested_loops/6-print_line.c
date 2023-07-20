#include "main.h"

/**
 * print_line - drawing straight line
 * @n: number of _
 * Return 0
*/
void print_line(int n)
{
	int z;

	for (z = 0; z <= n; z++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}

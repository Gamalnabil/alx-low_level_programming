#include "main.h"

/**
 * print_squar - print squar from #
 * @size: number of #
 * Return: Always newline
*/
void print_squar(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}

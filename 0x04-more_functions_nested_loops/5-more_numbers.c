#include "main.h"

/**
 * more_numbers - Print numbers from 0 to 14 ten times
 *
 * Return: Always 0
*/
void more_numbers(void)
{
	int n;
	int z;

	for (n = 0; n < 10; n++)
	{
		for (z = 0; z <= 14; z++)
		{
			if (z > 9)
			{
				_putchar('1');
			}
			_putchar((z % 10) + '0');
		}
		_putchar('\n');
	}
}

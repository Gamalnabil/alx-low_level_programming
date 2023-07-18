#include "main.h"

/**
 * print_to_98 - print untill get 98
 * @n: this is the number will gona start from
*/
void print_to_98(int n)
{
	while (98 >= n)
	{
		printf("%c", n);
		n++;
			if (n < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
	}
}

#include "main.h"

/**
 * print_numbers - this prints numbers from 0 to 9
 *
 * Return: Always 0 (Success)
*/
void print_numbers(void)
{
	int n;

	do
	{
		_putchar(n + 48);
		num++;
	}
	while (n >= 0 && n <= 9);
	_putchar('\n');
}

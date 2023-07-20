#include "main.h"

/**
 * print_numbers - this prints numbers from 0 to 9
 *
 * Return: Always 0 (Success)
*/
void print_numbers(void)
{
	for (char n = '0'; n < '10'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}

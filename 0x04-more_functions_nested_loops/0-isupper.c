#include "main.h"

/**
 * _isupper - check the upper and lower case of letters
 * @c: this is the value of input
 * Return: Always 0 (Success)
*/
int _isupper(int c)
{
	if (c <= 'a'&& c >= 'z')
	{
		_putchar('c');
		_putchar(':');
		_putchar(' ');
		_putchar('0');
	}
	else if (c <= 'A'&& c >= 'Z')
	{
		_putchar('c');
		_putchar(':');
		_putchar(' ');
		_putchar('1');
	}
}

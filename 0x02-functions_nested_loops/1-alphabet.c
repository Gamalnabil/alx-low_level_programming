#include "main.h"

/**
 * main - Entry point
 * void - print alphabet
 * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar ('\n');
}

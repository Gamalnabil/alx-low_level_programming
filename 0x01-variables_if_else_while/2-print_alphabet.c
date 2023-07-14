#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int manin(void)
{
	int n = 97;

	for (n <= 122 ; n++)
	{
		putchar (n + '0');
		n++;
	}
	putchar ('\n');

	return (0);
}

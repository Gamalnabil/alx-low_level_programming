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

	while (n <= 122)
	{
		putchar (n);
		n++;
	}
	putchar ('\n');
	
	return (0);
}

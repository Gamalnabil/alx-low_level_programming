#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int manin(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar ('a' + i);
	}
	putchar ('\n');
	
	return (0);
}

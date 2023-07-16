#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		if (n == 'e' && n == 'q')
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar ('\n');
	return (0);
}

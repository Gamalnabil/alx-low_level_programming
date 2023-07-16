#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char n;

	do (n = 'a'; n <= 'z'; n++ )
	{
		if (n == 'e' && n == 'q')
		{
			n++;
		}
		putchar(n);
	}
	putchar ('\n');
	return (0);
}

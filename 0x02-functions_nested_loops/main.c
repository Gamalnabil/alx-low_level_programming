#include <stdio.h>

int _putchar(char p[], int n)
{
	for (int i = 0; i < n; i++)
	{
		putchar(p[i], '0');
	}
	putchar('\n);
}

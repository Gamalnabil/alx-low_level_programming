#include <stdio.h>

char putchar(char p[], int i)
{
	char p[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	for (int i = 0; i < 9; i++)
	{
		putchar(p[i]);
	}
}

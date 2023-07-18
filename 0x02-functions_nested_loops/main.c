#include <stdio.h>

void hello()
{
	char n[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};
	for (int i = 0; i < 9; i++)
	{
		putchar(n[i]);
	}
}

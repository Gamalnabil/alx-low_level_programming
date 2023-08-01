#include "main.h"

/**
 * _memset - files memory with a constant byte
 * @s: input value
 * @b: input value
 * @n: input value
 * Return: a
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int t;

	for (t = 0; n > 0; t++; n--)
	{
		s[t] = b;
	}
	return (s);
}

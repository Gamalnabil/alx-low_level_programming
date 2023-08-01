#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input value
 * @accept: input value
 *
 * Return: 0
*/
char *_strpbrk(char *s, char *accept)
{
	int t, b;
	char *p;

	t = 0;
	while (s[t] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[t])
			{
				p = &s[t];
				return (p);
			}
			b++;
		}
		t++;
	}
	return (0);
}

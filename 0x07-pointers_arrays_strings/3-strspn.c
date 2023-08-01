#include "main.h"

/**
 * _strspn - get the length of a prefix substring.
 * @s: input value
 * @accept: input value
 *
 * Return: s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int t, b;

	for (t = 0; s[t] != '\0'; t++)
	{
		for (b = 0; accept[b] != s[t]; b++)
		{
			if (accept[b] == '\0')
			{
				return (t);
			}
		}
	}
	return (t);
}

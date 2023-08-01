#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n; t++)
	{
		dest[t] = src[t];
	}
	return (dest);
}

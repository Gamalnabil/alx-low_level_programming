#include "main.h"

/**
 * *_strcpy - copy the pointed to by src to dest
 * @dest: the new pointed
 * @src: the original pointed
 * Return: Always dest
*/
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x;

	while (*(src + 1) != '\0')
	{
		l++;
	}
	for (x = 0; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[1] = '\0';
	return (dest);
}

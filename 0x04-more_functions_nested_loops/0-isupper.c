#include "main.h"

/**
 * _isupper - check the upper and lower case of letters
 * @c: this is the value of input
 * Return: Always 0 (Success)
*/
int _isupper(int c)
{
	if (c <= 'a'&& c >= 'z')
	{
		return (1);
	}
	else if (c <= 'A'&& c >= 'Z')
	{
		return (0);
	}
}

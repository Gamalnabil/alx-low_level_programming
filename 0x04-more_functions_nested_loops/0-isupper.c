#include "main.h"

/**
 * _isupper - check the upper and lower case of letters
 * @c: this is the value of input
 * Return: Always 0 (Success)
*/
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

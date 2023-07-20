#include "main.h"

/**
 * _isdigit - check if c is adigit
 * @c: the char of input
 * Return: 1 if the value is digit else return 0
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

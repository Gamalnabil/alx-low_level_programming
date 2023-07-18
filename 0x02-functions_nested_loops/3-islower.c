#include "main.h"

/**
 * _islower - Entry point
 * c: checks input of functions
 * Return: 1 if the input lowercase and 0 if the input uppercase
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

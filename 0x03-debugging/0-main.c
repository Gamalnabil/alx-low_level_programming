#include "main.h"

/**
 * positive_or_negative - checking if the input negative or positive
 * @i: this is the input value
 * Return: Always 0 (Success)
*/
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("the number is positive");
	}
	else if (i < 0)
	{
		printf("the number is negative");
	}
	else
	{
		printf("the number is zero");
	}
}

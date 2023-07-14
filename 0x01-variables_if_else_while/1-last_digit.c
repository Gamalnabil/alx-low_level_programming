#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int lastdigit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (lastdigit > 5)
	{
		printf("Last digit of %d is 8 and is greater than 5\n", n);
	}
	else if (lastdigit < 6)
	{
		printf("Last digit of %d is -8 and is less than 6 and not 0\n", n);
	}
	else
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	return (0);
}

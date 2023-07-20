#include <stdio.h>

/**
 * largest_prime_factor - get the largest factor
 * @n: number of find
*/
void largest_prime_factor(long int n)
{
	int p, l;

	while (n % 2 == 0)
	{
		n = n / 2;
	}
	for (p = 3; p <= s; p += 2)
	{
		while (n % p == 0)
		{
			n = n / p;
			l = p;
		}
	}
	if (n > 2)
	{
		l = n;
	}
	printf("%d\n", l);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}

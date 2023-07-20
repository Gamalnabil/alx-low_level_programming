#include <stdio.h>


/**
 * _sqrt - double variable
 * @x: mr x
*/
double _sqrt(double x)
{
	float s, t;

	s = x / 2;
	t = 0;

	while (s != t)
	{
		t = s;
		s = (x / t + t) / 2;
	}
	return (s);
}

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
	for (p = 3; p <= _sqrt(n); p += 2)
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

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
*/
int main(void)
{
	int i;

	for (i = 1; 1 <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			prinf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			prinf("%d ", i)
		}
	}
	printf("\n");
}

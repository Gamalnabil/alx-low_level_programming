#include "main.h"

/**
 * reverse_array - reverse array for integers
 * @a: array
 * @n: number of the elemensts of array
 *
 * Return: void
*/
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}

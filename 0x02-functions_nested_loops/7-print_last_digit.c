#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: get the last digit of num
 * Return: Always 0 (Success)
*/
int print_last_digit(int n)
{
	_abs(n);
	return (n % 10);
}

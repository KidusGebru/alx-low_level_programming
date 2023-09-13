#include "main.h"
/**
 * print_last_digit - Prints last digit of number n
 * @n: Input number
 *
 * Return: Last digit of n
 */
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
	{
		n = ~n;
		lastDigit = (n - (n / 10) * 10) + 1;
	}
	else
	{
		lastDigit = n - (n / 10) * 10;
	}
	_putchar('0' + lastDigit);
	return (lastDigit);
}


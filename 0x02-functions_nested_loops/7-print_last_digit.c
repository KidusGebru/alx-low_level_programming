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
		n = n * -1;
	}

	lastDigit = n - (n / 10);

	_putchar('0' + lastDigit);
	return (lastDigit);
}


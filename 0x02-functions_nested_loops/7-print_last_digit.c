#include "main.h"
/**
 * print_last_digit - Prints last digit of number n
 * @n: Input number
 *
 * Return: Last digit of n
 */
int print_last_digit(int n)
{
	int lastDigit = n - (n / 10);

	_putchar(lastDigit);
	return (lastDigit);
}


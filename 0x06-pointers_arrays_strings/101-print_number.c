#include "main.h"

/**
 * print - Prints a number to console
 * @digit: Single digit to print
 *
 * Return: Always void
 */

void print(int digit)
{
	if (digit < 0)
		digit *= -1;
	_putchar('0' + digit);
}

/**
 * print_number - Prints an integer to console digit by digit
 * @number: Integer to print
 *
 * Return: Always void
 */

void print_number(int number)
{
	int divider = 1;
	int lastDigit = number % 10;

	number /= 10;

	if (number < 0)
	{
		_putchar('-');
	}
	else if (number == 0)
	{
		print(0);
		return;
	}

	while (number / divider != 0)
		divider *= 10;

	divider /= 10;
	print(number / divider);

	while (divider > 1)
	{
		divider /= 10;
		print((number / divider) % 10);
	}
	print(lastDigit);
}

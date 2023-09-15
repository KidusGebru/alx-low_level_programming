#include "main.h"
/**
 * print_number - Print an integer number
 * @n: Number to print
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int divider = 1000000000;
	unsigned int value;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	else if (n == 0)
	{
		_putchar('0');
		return;
	}
	value = n;

	while (divider > 0)
	{
		if (value / divider > 0)
		{
			_putchar('0' + value / divider);
			value %= divider;
			if (value < divider / 10)
				_putchar('0');
		}
		divider /= 10;
	}
}

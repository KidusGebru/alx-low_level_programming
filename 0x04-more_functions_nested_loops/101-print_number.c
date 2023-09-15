#include "main.h"
/**
 * print_number - Print an integer number
 * @n: Number to print
 *
 * Return: void
 */
void print_number(int n)
{
	int divider = 100000000;

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

	while (divider > 0)
	{
		if (n / divider > 0)
		{
			_putchar('0' + n / divider);
			n %= divider;
			if (n < divider / 10)
				_putchar('0');
		}
		divider /= 10;
	}
}

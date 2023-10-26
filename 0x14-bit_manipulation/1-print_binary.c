#include "main.h"
#include <limits.h>

/**
 * print_binary - Prints a binary representation of a number
 * @n: unsigned long number
 *
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned long int p = LONG_MIN;

	if (n == 0)
		_putchar('0');

	while (1)
	{
		if (p == 0)
			break;
		if ((p & n) > 0)
			i = 1;
		if (i > 0)
		{
			if ((p & n) > 0)
				_putchar('1');
			else
				_putchar('0');
		}
		p = p >> 1;
	}
}

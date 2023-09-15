#include "main.h"
/**
 * print_triangle - Prints a triangle of base 'size'
 * @size: tirangle base length
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			_putchar(32);
		}
		for (k = 0; k < i + 1; k++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}


#include "main.h"
/**
 * print_alphabet_x10 - Print letters a to z in lowercase 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 10; j > 0; j--)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar(10);
	}
}

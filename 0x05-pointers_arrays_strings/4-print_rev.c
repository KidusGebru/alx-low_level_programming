#include "main.h"

/**
 * print_rev - Prints a string in reverse into a stdout
 * @s: the string
 *
 * Return: Void
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	for (i--; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}

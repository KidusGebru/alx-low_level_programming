#include "main.h"

/**
 * _puts_recursion - Prints characters of a sting.
 * @s: Location of character in memory
 *
 * Return: Always void
 */

void _puts_recursion(char *s)
{
	if (*(s) == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*(s));
	_puts_recursion(s + 1);
}

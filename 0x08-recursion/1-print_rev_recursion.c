#include "main.h"

/**
 * _print_rev_recursion - Prints characters of a sting in reverse.
 * @s: Location of character in memory
 *
 * Return: Always void
 */

void _print_rev_recursion(char *s)
{
	if (*(s) != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	_putchar(*(s - 1));

}

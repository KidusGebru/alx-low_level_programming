#include "main.h"

/**
 * puts_half - Prints half of a given string
 * @str: the string
 *
 * Return: Void
 */

void puts_half(char *str)
{
	int i, len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}
	for (i = (len + 1) / 2; i <= len; i++)
	{
		if (*(str + i) != '\0')
			_putchar(*(str + i));
	}
	_putchar('\n');
}

#include "main.h"

/**
 * rev_string - reverses a given string
 * @s: the string
 *
 * Return: Void
 */

void rev_string(char *s)
{
	int i, len = 0;
	char ch;

	while (*(s + len) != '\0')
	{
		len++;
	}
	_putchar('0' + len);
	for (i = 0; i <= len / 2; i++)
	{
		ch = s[i];
		s[i] = s[len - i];
		s[len - i] = ch;
	}
}

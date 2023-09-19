#include "main.h"
#include <stdio.h>
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
	len--;
	for (i = 0; i <= len / 2; i++)
	{
		if (i == len - i)
			break;
		ch = *(s + i);
		*(s + i) = *(s + (len - i));
		*(s + (len - i)) = ch;
	}
}

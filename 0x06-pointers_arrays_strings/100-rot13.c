#include "main.h"
/**
 * getRot - Gets the 13th letter after
 * @r: The alphabet string
 * @d: Alphabet rotated by 13
 * @ch: Character to rotate
 *
 * Return: Character after rotating by 13
 */

char getRot(char *r, char *d, char ch)
{
	int i = 0;

	while (*(r + i) != '\0')
	{
		if (*(r + i) == ch)
		{
			ch = *(d + i);
			break;
		}
		i++;
	}
	return (ch);
}

/**
 * rot13 - Implements the ROT13 ciphering on str
 * @str: The string
 *
 * Return: Pointer to rotated string
 */

char *rot13(char *str)
{
	int i = 0;
	char *ref = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *indx = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(str + i) != '\0')
	{
		*(str + i) = getRot(ref, indx, *(str + i));
		i++;
	}
	return (str);
}


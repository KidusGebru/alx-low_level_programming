#include "main.h"

/**
 * chkLet - Replaces if letter is replaceable.
 * @letters: The string of replaceable letters
 * @leets: The string of replacing leet letters
 * @ch: The character
 *
 * Return: Char of letter
 */

char chkLet(char *letters, char *leets, char ch)
{
	int i = 0;

	while (*(letters + i) != '\0')
	{
		if (*(letters + i) == ch)
		{
			ch = *(leets + i);
			break;
		}
		i++;
	}
	return (ch);
}

/**
 * leet - Encodes str into leet.
 * @str: The string
 *
 * Return: Encoded string
 */
char *leet(char *str)
{
	char *letters = "aAeEoOtTlL";
	char *leets = "4433007711";
	int i = 0;

	while (*(str + i) != '\n')
	{
		*(str + i) = chkLet(letters, leets, *(str + i));
		i++;
	}
	return (str);
}



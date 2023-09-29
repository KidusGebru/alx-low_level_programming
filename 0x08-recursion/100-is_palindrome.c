#include "main.h"

/**
 * _strlen_recursion - Returns string length.
 * @s: Start of string in memory
 *
 * Return: Length
 */

int _strlen_recursion(char *s)
{
	if (*(s) == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}


/**
 * _pal - Decides if a string is palindrome
 * @pos: Position tracker in string
 * @len: Length of string
 * @s: String location in memort
 *
 * Return: 1 if s is palindrome; 0 otherwise
 */

int _pal(char *s, int pos, int len)
{
	if (*(s + (len - pos)) != *(s + pos))
		return (0);
	if (len / 2 >= pos)
		return (1);

	return (_pal(s, --pos, len));
}

/**
 * is_palindrome - Entry to a recursive function _pal
 * @s: String location in memory
 *
 * Return: 1 if s is palindrome; 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len < 2)
		return (1);

	return (_pal(s, len - 1, len - 1));
}

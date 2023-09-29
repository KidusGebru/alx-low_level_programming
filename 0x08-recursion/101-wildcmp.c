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
 * _findNext1 - Finds location of matching character from s1 in reverse
 * @s1: String 1 starting from current position
 * @c: The character from s2
 * @len: Number of remaining characters of s1
 *
 * Return: Location of matching character
 */

char *_findNext1(char *s1, char c, int len)
{
	if (*(s1 + len) == c || *(s1 + len) == '\0')
		return (s1 + len);
	return (_findNext1(s1, c, len - 1));
}

/**
 * _findNext2 - Finds location of next character other than * in s2
 * @s2: String 2 at current position
 *
 * Return: Location in memory of character
 */

char *_findNext2(char *s2)
{
	if (*(s2) != '*' || *(s2) == '\0')
		return (s2);
	return (_findNext2(s2 + 1));
}

/**
 * wildcmp - Decides if two strings are the same
 * @s1: String 1
 * @s2: String 2
 *
 * Return: 1 if s1 and s2 are the same; 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	char *nC1, *nC2;
	int s1Len;

	if (*(s1) == '\0' && *(s2) == '\0')
		return (1);
	else if (*(s2) == '*')
	{
		nC2 = _findNext2(s2 + 1);

		if (*(nC2) == '\0')
			return (1);

		s1Len = _strlen_recursion(s1) - 1;
		nC1 = _findNext1(s1, *(nC2), s1Len);

		if (*(nC1) == '\0')
			return (0);

		return (wildcmp(nC1 + 1, nC2 + 1));
	}
	else if (*(s1) != *(s2))
		return (0);

	return (wildcmp(s1 + 1, s2 + 1));
}

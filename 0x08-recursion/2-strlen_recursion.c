#include "main.h"

/**
 * _strlen_recursion - Returns string length.
 * @s: Start of string in memory
 *
 * Return: Integer
 */

int _strlen_recursion(char *s)
{
	if (*(s) == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

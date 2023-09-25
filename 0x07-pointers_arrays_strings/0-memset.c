#include "main.h"
/**
 * _memset - Fills memory with constant char b to n bytes
 * @s: Memory location
 * @b: Character constant
 * @n: Memory length
 *
 * Return: Void
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}


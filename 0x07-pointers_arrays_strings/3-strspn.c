#include "main.h"
/**
 * _strspn - Returns initial substring of s containing chars from accept
 * @s: Source string
 * @accept: Acceptable characters string
 *
 * Return: Length of initial substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0;
	int stop = 0;

	while (*(s + i) != '\0')
	{
		stop = 1;
		while (*(accept + j) != '\0')
		{
			if (*(accept + j) == *(s + i))
			{
				stop = 0;
				break;
			}
			j++;
		}

		if (stop == 1)
			break;
		i++;
		j = 0;
	}

	return (i);
}

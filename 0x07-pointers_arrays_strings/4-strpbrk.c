#include "main.h"
/**
 * _strpbrk - Returns a pointer to first occurrence of char in accept
 * @s: Source string
 * @accept: Acceptable characters string
 *
 * Return: Pinter to char in s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j = 0;
	char *p = NULL;
	int stop = 0;

	while (*(s + i) != '\0')
	{
		while (*(accept + j) != '\0')
		{
			if (*(accept + j) == *(s + i))
			{
				stop = 1;
				p = s + i;
				break;
			}
			j++;
		}

		if (stop == 1)
			break;
		i++;
		j = 0;
	}

	return (p);
}

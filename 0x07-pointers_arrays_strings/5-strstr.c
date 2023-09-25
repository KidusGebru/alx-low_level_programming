#include "main.h"
/**
 * _strstr - Returns a pointer to first occurrence of needle in haystack
 * @haystack: Source string
 * @needle: String to search for in source string
 *
 * Return: Pinter the first char of first occurrence of needle or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0, l = 0;
	char *p = NULL;
	int stop = 0;

	while (*(haystack + i) != '\0')
	{
		if (*(haystack + i) == *(needle + j))
		{
			l = i;
			stop = 0;
			while (*(needle + j) != '\0')
			{
				if (*(haystack + i) != *(needle + j))
				{
					stop = 1;
					break;
				}
				j++;
				i++;
			}
			if (stop == 1)
				j = 0;
			else
				break;
		}
		i++;
	}

	if (stop != 1)
		p = haystack + l;

	return (p);
}

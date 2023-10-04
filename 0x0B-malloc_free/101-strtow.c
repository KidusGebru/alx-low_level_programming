#include "main.h"
#include <stdlib.h>

/**
 * get_words - Counts words and returns their positions
 * @str: The string
 * @begs: Array for beginning of words
 * @ends: Array for end position of words in string
 *
 * Return: Number of words
 */

int get_words(char *str, int *begs, int *ends)
{
	int i = 0, size = 0, be = 0, cnt = 1;

	while (str[i] != '\0')
	{
		if ((str[i] > 32 && str[i] < 127) && cnt == 1)
		{
			size++;
			cnt = 0;
			begs[be] = i;
		}
		else if (str[i] == 32)
		{
			if (cnt == 0)
			{
				ends[be] = i - 1;
				be++;
			}
			cnt = 1;
		}
		i++;
		if (cnt == 0 && str[i] == '\0')
			ends[be] = i - 1;
	}
	return (size);
}

/**
 * strtow - Splits string into words
 * @str: The string
 *
 * Return: Pointer to array of strings or NULL
 */

char **strtow(char *str)
{
	char **words;
	int begs[100], ends[100], cnt = 0, i = 0, size = 0, be = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	size = get_words(str, begs, ends);
	if (size == 0)
		return (NULL);

	words = malloc(size * sizeof(char *) + 1);
	if (words == NULL)
		return (NULL);

	while (cnt < size)
	{
		words[cnt] = malloc((ends[cnt] - begs[cnt] + 3) * sizeof(char));
		if (words[cnt] == NULL)
			return (NULL);
		i = 0;
		for (be = begs[cnt]; be <= ends[cnt]; be++)
		{
			words[cnt][i] = str[be];
			i++;
		}

		words[cnt][i] = '\0';
		cnt++;
	}
	words[cnt] = NULL;
	return (words);
}

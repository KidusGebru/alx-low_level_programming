#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments
 * @ac: Arguments counter
 * @av: Arguments value
 *
 * Return: Pointer to concatenated string in memory
 */

char *argstostr(int ac, char **av)
{
	int i, j, counter = 0, k = 0;
	char *loc;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
			j++;

		counter += j + 1;
	}

	loc = malloc(counter * sizeof(char));
	if (loc == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			loc[k] = av[i][j];
			k++;
			j++;
		}
		loc[k] = '\n';
		k++;
	}
	return (loc);
}

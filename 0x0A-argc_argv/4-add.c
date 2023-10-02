#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints sum of numbers passed as arguments
 * @argc: Argument counter
 * @argv: Arguments values
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, res = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) > 0 || (*(argv[i]) == '0' && *(argv[i] + 1) == 0))
			{
				res += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}

	}

	printf("%d\n", res);
	return (0);
}

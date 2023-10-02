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
	int i, j = 0, res = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) != 0)
			{
				res += atoi(argv[i]);
			}
			else
			{
				while (*(argv[i] + j) != 0)
				{
					if (!(*(argv[i] + j) >= '0' && *(argv[i] + j) <= '9'))
					{
						if (j > 0 || *(argv[i] + j) != '-')
						{
							printf("Error\n");
							return (1);
						}
					}
					j++;
				}
				j = 0;
				res += atoi(argv[i]);
			}
		}

	}

	printf("%d\n", res);
	return (0);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints minimum number of coins to make up a given change
 * @argc: Argument counter
 * @argv: Arguments values
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int counter = 0, amount = 0;
	int coins[5] = {1, 2, 5, 10, 25}, i = 4;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) <= 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		amount = atoi(argv[1]);
		while (amount > 0)
		{
			counter += amount / coins[i];
			amount %= coins[i];
			i--;
		}
		printf("%d\n", counter);
		return (0);
	}

}

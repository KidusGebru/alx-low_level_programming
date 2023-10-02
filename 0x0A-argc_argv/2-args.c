#include "main.h"
#include <stdio.h>

/**
 * main - Lists all the arguments passed to the program
 * @argc: Argument counter
 * @argv: Arguments values
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}

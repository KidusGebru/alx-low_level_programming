#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: Argument counter
 * @argv: Arguments values
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", --argc);
	return (0);
}

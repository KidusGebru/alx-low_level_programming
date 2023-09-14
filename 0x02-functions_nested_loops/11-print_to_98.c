#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints natural number upto 98
 *@a: Starting number
 *
 * Return: void
 */
void print_to_98(int a)
{
	int direction;

	if (a > 98)
		direction = -1;
	else
		direction = 1;
	printf("Starting ... with %d \n", direction);

	printf("%d", a);

	while ( a != 98)
	{
		a += direction;
		printf(", %d", a);
	}
	printf("\n");
}


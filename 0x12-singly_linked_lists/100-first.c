#include <stdio.h>

/**
 * run_first - Runs before the main funtion to print a message
 *
 * Return: Always void
 */

void __attribute__((constructor)) run_first(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}

#include <stdlib.h>

/**
 * print_name - Prints a string in different capitalization
 * @name: Name string
 * @f: Function pointer
 *
 * Return: Always void
 */

void print_name(char *name, void (*f)(char *))
{
	char *c_name = "";

	if (name != NULL)
		c_name = name;
	f(c_name);
}

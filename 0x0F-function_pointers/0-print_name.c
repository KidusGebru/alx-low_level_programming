
/**
 * print_name - Prints a string in different capitalization
 * @name: Name string
 * @f: Function pointer
 *
 * Return: Always void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

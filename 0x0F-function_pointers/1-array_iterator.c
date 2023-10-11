#include <stdio.h>
/**
 * array_iterator - Executes given function on elements of array
 * @array: Pointer to array of integers
 * @size: Size of the pointer
 * @action: Function pointer
 *
 * Return: Always void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (i = 0; i < size; i++)
		action(array[i]);

}

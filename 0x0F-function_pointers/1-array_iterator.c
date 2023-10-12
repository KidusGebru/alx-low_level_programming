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
	size_t i = 0, r_size = size;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < r_size; i++)
		{
			if (array[i] == '\0')
				break;
			action(array[i]);
		}
	}
}

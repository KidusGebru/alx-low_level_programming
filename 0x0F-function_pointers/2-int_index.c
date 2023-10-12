#include <stdio.h>
/**
 * int_index - Searches an array for an integer
 * @array: Pointer to array of integers
 * @size: Size of the pointer
 * @cmp: Pointer to comparator function
 *
 * Return: Index of matched element or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, ret = -1;

	if (array == NULL || cmp == NULL)
		return (0);

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				ret = i;
				break;
			}
		}
	}
	return (ret);

}

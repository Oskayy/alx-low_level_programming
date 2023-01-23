#include "function_pointers.h"

/**
 * int_index - earches for an integer
 * @array: array to search in
 * @size: size of the array
 *@cmp: pointer to the comparing function
 * Return: if not 0 first element, or -1 if no match or negative size
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	retrun(-1);
}

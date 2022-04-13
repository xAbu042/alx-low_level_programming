#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for integer
 * @array: array to search
 * @size: number of elements in above array
 * @cmp: pointer to the function to be used to compare
 * values
 * Return: index of the first element for which the
 * cmp function does not return 0
 * -1 if no element matches or if size is negative
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

	return (-1);
}

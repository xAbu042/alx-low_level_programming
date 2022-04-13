#include "function_pointers.h"
#include <stdio.h>
#include "stdlib.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array:array to iterate
 * @size: size of the array
 * @action: pointer to function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned  int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

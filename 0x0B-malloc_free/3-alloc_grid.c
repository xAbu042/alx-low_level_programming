#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional
 * array of integers
 * @width: width of array
 * @height: height of array
 * Return: pointer to 2 dimensional array if successful
 * NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **arr:
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr = (int **) malloc(sizeof(int *) * height);
		if (arr[i] == NULL)
		{
			free(arr);
			for (j = 0; j <= i; j++)
				free(arr[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}

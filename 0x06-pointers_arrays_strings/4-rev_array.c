#include "main.h"

/**
 * reverse_array - reverses the content of
 * an array of integers
 * @a: array to be reversed
 * @n: no. of elements in array
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j--] = temp;
	}
}

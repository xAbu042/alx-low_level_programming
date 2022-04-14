#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of parameters to evaluate
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list st;
	unsigned int i;
	int sum = 0;

	va_start(st, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(st, int);
	}
	va_end(st);

	return (sum);
}

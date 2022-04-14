#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list sic;
	unsigned int i;

	va_start(sic, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(sic, int));
		else if (separator && i == 0)
			printf("%d", va_arg(sic, int));
		else
			printf("%s%d", separator, va_arg(sic, int));
	}

	va_end(sic);

	printf("\n");
}


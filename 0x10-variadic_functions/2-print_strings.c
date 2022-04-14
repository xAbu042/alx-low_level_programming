#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *s;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char *);

		if (!s)
			s = ("(nil)");

		if (!separator)
			printf("%s", s);

		else if (separator && i == 0)
			printf("%s", s);

		else
			printf("%s%s", separator, s);
	}

	printf("\n");

	va_end(str);
}

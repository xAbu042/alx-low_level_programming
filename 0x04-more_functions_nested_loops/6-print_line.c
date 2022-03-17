#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times character _ is printed
 */
void print_line(int n)
{
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');

		}
		_putchar('\n');
	}
		if (n <= 0)
		{
			_putchar('\n');
		}
}

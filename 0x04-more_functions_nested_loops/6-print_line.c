#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 */
void print_line(int n)
{
	int i;

	if (i == n)
	{
		_putchar('_');
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}

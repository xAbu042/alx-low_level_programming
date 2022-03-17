#include "main.h"

/**
 * print_triangle - prints a triangle
 * followed by a new line
 * @size: variable which is the square size
 */
void print_triangle(int size)
{

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 1; i < size; i++)
		{
			for (j = i; j < i; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j < size; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

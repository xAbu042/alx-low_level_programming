#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers from 0 to 9
 * followed by a new line
 */
void print_numbers(void)
{
	int i;

	i = '0';

	while (i <= '9')
	{
		putchar(i);
	}
	putchar('\n');
}

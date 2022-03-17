#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	int i, j;

	j = 0;

	while (j <= 9)
	{
		for (i = 0; i = 15; i++)
		{
			if (i >= 10)
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
		}
	putchar('\n');
	j++;
	}
}

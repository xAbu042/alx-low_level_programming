#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * followed by a new line
 * @str: string to print the characters from
 */

void puts2(char *str)
{
	int i, map;

	map = 0;

	while (str[map] != '\0')
	{
		map++;
	}

	for (i = 0; i < map; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

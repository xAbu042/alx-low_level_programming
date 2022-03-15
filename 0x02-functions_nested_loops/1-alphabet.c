#include "main.h"

/**
 * print_alphabet - prints, the alphabet, in lowercase
 * followed by a new line
 * Return: Always 0 (Successful)
 */
void print_alphabet(void)
{
	char k;

	k = 'a';

	while (k <= 'z')
	{
		_putchar(k);
		k++;
	}

	_putchar('\n');
}

#include "main.h"

/**
 * main - prints, the alphabet, in lowecase
 * followed by a new line
 * Return: Always 0 (Successful)
 */
void print_alphabet(void);
{
	char k = 'a';

	while (k <= 'z')
	{
		_putchar(k);
		k++;
	}
	_putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * starting from 0,
 * followed by a new line
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int y;

	for (y = '0'; y <= '9'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}



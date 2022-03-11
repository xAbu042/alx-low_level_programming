#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the alphabet in lowercase
 * apart from q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';

	for (ch <= 'z'; ch != 'q' && ch != 'e')
		putchar(ch);
	putchar('\n');
	return (0);
}

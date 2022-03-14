#include <stdio.h>

 /**
  * main - prints all possible different combinations of two digits
  * Return: Always 0 (successful)
  */
int main(void)
{
	int i, y;

	for (i = '48'; i <= '56'; i++)
	{
		for (y = '49'; y <= '57'; y++)
		{
			if (y > i)
			{
				putchar(x);
				putchar(y);
				if (i != '56' || y != '57')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}


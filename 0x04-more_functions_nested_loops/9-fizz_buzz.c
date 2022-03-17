#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints numbers from 1 to 100,
 * and checks for the multiples of 3, 5 and 15
 * and assigns the words Fizz, Buzz, Fizz Buzz
 * Return: Always 0 (Successful)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{

		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}
		else if
		(i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		}
		else if
		(i % 15 == 0)
		{
			printf(" FizzBuzz");
		}

		else
		{
		printf("%d\n", i);
		}
	}

	return (0);
}

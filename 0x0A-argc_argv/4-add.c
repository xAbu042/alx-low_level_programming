#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: string converted to integer
 */
int _atoi(char *s)
{
	int i, j, k, l, len, digit;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	len = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && l == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (j % 2)
				digit = -digit;
			k = k * 10 + digit;
			l = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			l = 0;
		}
		i++;
	}

	if (l == 0)
		return (0);

	return (k);
}

/**
 * main - adds two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 if program does not receive two argc
 * 0 if successful
 */
int main(int argc, char *argv[])
{
	int i, j, k, num, result;

	result = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		num = _atoi(argv[k]);
		if (num >= 0)
		{
			result += num;
		}
	}

	printf("%d\n", result);
	return (0);
}

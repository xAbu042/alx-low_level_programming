#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: variable of string to whose length
 * is measured
 * Return: value of length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

#include "main.h"
#include "stdio.h"

/**
 * _strchr - locates a char in a string
 * @s: string in which the char is located
 * @c: char to be located
 * Return: a pointer to the first occurence of
 * char c in string s, or NULL of
 * char is not found
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}

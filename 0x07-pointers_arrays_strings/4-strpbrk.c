#include "main.h"
#include <stdio.h>

/**
 *_strpbrk - searches a string for any set
 * of bytes
 * @s: string to check
 * @accept: string containing bytes to check
 * Return: pointer to the byte in s that matches
 * on of the bytes in accept or NULL
 * if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
	}
	return (NULL);
}

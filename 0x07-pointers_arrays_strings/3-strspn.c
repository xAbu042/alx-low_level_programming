#include "main.h"

/**
 * _strspn - gets the length of a prefix
 * substring
 * @s: string to evaluate
 * @accept: string containing list of char to match in s
 * Return:  number of bytes in the initial segment of s,
 * which consists of only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c, lem;

	c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		lem = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				lem = 1;
			}
		}
		if (lem == 0)
		{
			return (c);
		}
	}
	return (0);
}


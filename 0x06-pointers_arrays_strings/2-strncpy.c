#include "main.h"

/**
 * _strncpy - copies a string
 * @src: string to be copied
 * @dest: to where the string is being copied
 * @n: bytes to be copied
 * Return: string that has been copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != 0 && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}



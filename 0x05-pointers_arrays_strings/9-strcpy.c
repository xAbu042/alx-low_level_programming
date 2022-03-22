#include "main.h"

/**
 * _strcpy - copies string pointed to by src
 * including the terminating byte
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer to which we copy string
 * @src: string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

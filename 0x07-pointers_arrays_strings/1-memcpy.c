#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: memory area to be copied into
 * @src: memory area to be copied from
 * @n: number of times to copy
 * Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

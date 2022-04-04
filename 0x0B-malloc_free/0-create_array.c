#include <stdlib.h>
#include "main.h"


/**
 * create_array - creates an array of chars
 * @size: size of the array of chars
 * @c:char to initialize the array
 * Return: pointer to the array if successful
 * NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}

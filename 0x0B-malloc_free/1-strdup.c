#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a
 * newly allocated space in memory, which contains
 * a copy of the string given as parameter
 * @str: parameter (string) to copy
 * Return: NULL if insufficient memory was available
 * Pointer to duplicated string if successful
 */
char *_strdup(char *str)
{
	char *cpy;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
	len++;

	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	while ((cpy[i] = str[i]) != '\0')
		i++;

	return (cpy);
}

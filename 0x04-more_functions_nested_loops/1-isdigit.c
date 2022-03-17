#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: variable to check
 * Return: 1 if c is a digit
 * 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

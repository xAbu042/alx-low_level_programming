#include "main.h"

int find_sqrt(int n, int i);

/**
 * _sqrt_recursion - finds the natural square root of
 * a number
 * @n: number whose square root is to be found
 * Return: -1 if n does not have a square root
 * square root of n if it is a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}

/**
 * find_sqrt - recurses to find the natural square
 * root of a number
 * @n: number whose square root is to be found
 * @i: root number
 * Return: -1 if n is not a natural square root
 * resulting square root
 */
int find_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (find_sqrt(n, i + 1));
}


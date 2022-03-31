#include "main.h"

int find_prime(int a, int b);

/**
 * _is_prime_number - says if a number is a prime number
 * or not
 * @n: number to evaluate
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (find_prime(n, n - 1));
}

/**
 * find_prime - checks if number is prime recursively
 * @a: number to check
 * @b: iterator
 * Return: 1 if a is prime, 0 otherwise
 */
int find_prime(int a, int b)
{
	if (b == 1)
		return (1);
	if (a % b == 0 && b > 0)
		return (0);
	return (find_prime(a, b - 1));
}

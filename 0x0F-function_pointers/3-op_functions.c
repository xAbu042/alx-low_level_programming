#include "3-calc.h"

/**
 * op_add - calculates the sum of a and b
 * @a: First variable
 * @b: Second variable
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of a and b
 * @a: First element
 * @b: Second element
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of a and b
 * @a: First element
 * @b: Second element
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the division of a by b
 * @a: Divisor
 * @b: Denominator
 * Return: result of division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of division of
 * a by b
 * @a: Divisor
 * @b: Denominator
 * Return: remainder after dividing a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

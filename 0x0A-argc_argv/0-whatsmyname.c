#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name,
 * followed by a new line
 * @argc: number of arguments in program
 * @argv: array of arguments in program
 * Return: Always success (0)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

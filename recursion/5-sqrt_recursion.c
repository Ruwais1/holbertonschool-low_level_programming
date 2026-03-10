#include "main.h"

/**
 * find_sqrt - finds the natural square root of a number
 * @n: the number to find the square root of
 * @i: the current guess for the square root
 *
 * Return: the natural square root, or -1 if it doesn't exist
 */
int find_sqrt(int n, int i)
{
	if (n < 0)
		return (-1);

	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (find_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the natural square root, or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}

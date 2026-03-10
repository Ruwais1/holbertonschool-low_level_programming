#include "main.h"

/**
 * check_prime - checks recursively if a number is prime
 * @n: the number to check
 * @i: the iterator
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int i)
{
	if (n % i == 0)
		return (0);

	if (i >= n / 2)
		return (1);

	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n == 2 || n == 3)
		return (1);

	return (check_prime(n, 2));
}

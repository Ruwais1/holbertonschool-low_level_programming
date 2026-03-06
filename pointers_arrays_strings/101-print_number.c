#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int n1;

	/* Dealing with negative numbers */
	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
	{
		n1 = n;
	}

	/* Recursive call to reach the first digit */
	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	/* Print the last digit after converting to ASCII */
	_putchar((n1 % 10) + '0');
}

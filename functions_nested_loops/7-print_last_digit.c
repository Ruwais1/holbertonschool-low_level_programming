#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit from
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	/* إذا كان الرقم سالباً، حوله إلى موجب ليُطبع ويُعاد بشكل صحيح */
	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');

	return (last);
}

#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		/* We add '0' to the integer to get its ASCII value */
		putchar(num + '0');
	}

	putchar('\n');

	return (0);
}

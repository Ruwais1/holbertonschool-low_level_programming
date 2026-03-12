#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d1, d2;

	for (d1 = 48; d1 < 57; d1++)
	{
		for (d2 = d1 + 1; d2 <= 57; d2++)
		{
			putchar(d1);
			putchar(d2);

			/* Print comma and space unless it's the very last combo (89) */
			if (d1 != 56 || d2 != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

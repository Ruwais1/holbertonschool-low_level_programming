#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d1, d2, d3;

	/* Loop for the first digit (0 to 7) */
	for (d1 = 48; d1 < 56; d1++)
	{
		/* Loop for the second digit (d1 + 1 to 8) */
		for (d2 = d1 + 1; d2 < 57; d2++)
		{
			/* Loop for the third digit (d2 + 1 to 9) */
			for (d3 = d2 + 1; d3 <= 57; d3++)
			{
				putchar(d1);
				putchar(d2);
				putchar(d3);

				/* Print comma and space unless it's the last combo (789) */
				if (d1 != 55 || d2 != 56 || d3 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for 101-crackme.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 2772;
	char c;

	/* Seed the random number generator */
	srand(time(NULL));

	/* 126 is the maximum printable ASCII value ('~') */
	while (sum > 126)
	{
		/* Generate a random printable char between 33 ('!') and 126 ('~') */
		c = (rand() % 94) + 33;

		/* Ensure subtracting this char leaves us with a valid printable char */
		if (sum - c >= 33)
		{
			putchar(c);
			sum -= c;
		}
	}
	
	/* Print the final character to hit exactly 2772 */
	putchar(sum);

	return (0);
}

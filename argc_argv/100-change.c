#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	/* Calculate how many 25 cents */
	coins += cents / 25;
	cents %= 25;

	/* Calculate how many 10 cents */
	coins += cents / 10;
	cents %= 10;

	/* Calculate how many 5 cents */
	coins += cents / 5;
	cents %= 5;

	/* Calculate how many 2 cents */
	coins += cents / 2;
	cents %= 2;

	/* Add remaining 1 cents */
	coins += cents;

	printf("%d\n", coins);

	return (0);
}

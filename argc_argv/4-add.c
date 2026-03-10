#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	/* Start from 1 to skip the program name */
	for (i = 1; i < argc; i++)
	{
		/* Check each character of the string */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			/* If the character is not a digit, print Error */
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		
		/* Convert the string to integer and add to sum */
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

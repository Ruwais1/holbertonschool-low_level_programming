#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: the number of command line arguments
 * @argv: an array containing the program command line arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}

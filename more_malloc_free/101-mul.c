#include <stdlib.h>

int _putchar(char c);

/**
 * is_digit - checks if a string contains only digits
 * @s: string to check
 * Return: 1 if all digits, 0 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * errors - prints Error using _putchar and exits
 */
void errors(void)
{
	char *err = "Error";
	int i = 0;

	while (err[i])
	{
		_putchar(err[i]);
		i++;
	}
	_putchar('\n');
	exit(98);
}

/**
 * main - multiplies two big numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	/* 1. Validation */
	/* 2. Malloc result array */
	/* 3. Nested loops for digit multiplication */
	/* 4. Print result while skipping leading zeros */
	/* 5. Free memory */
	return (0);
}

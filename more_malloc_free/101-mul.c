#include <stdlib.h>

int _putchar(char c);

/**
 * _print_error - prints "Error" followed by a newline and exits
 */
void _print_error(void)
{
	char *err = "Error\n";
	int i;

	for (i = 0; err[i]; i++)
		_putchar(err[i]);
	exit(98);
}

/**
 * is_digit - checks if a string contains only digits
 * @s: string to check
 * Return: 1 if all digits, 0 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	if (!s || s[i] == '\0')
		return (0);
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * main - multiplies two positive numbers
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, j, carry, d1, d2, *res, a = 0;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
		_print_error();

	s1 = argv[1], s2 = argv[2];
	len1 = _strlen(s1), len2 = _strlen(s2);
	len = len1 + len2;
	res = malloc(sizeof(int) * len);
	if (!res)
		return (1);
	for (i = 0; i < len; i++)
		res[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		d1 = s1[i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			d2 = s2[j] - '0';
			carry += res[i + j + 1] + (d1 * d2);
			res[i + j + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			res[i + j + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (res[i])
			a = 1;
		if (a)
			_putchar(res[i] + '0');
	}
	_putchar(res[len - 1] + '0');
	_putchar('\n');
	free(res);
	return (0);
}

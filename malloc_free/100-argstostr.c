#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument count
 * @av: argument vector (array of strings)
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0, len = 0;

	/* 1. Check for basic failures */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* 2. Calculate total length needed */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++; /* Space for the '\n' after each argument */
	}
	len++; /* Space for the final '\0' */

	/* 3. Allocate memory */
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);

	/* 4. Copy each argument and add '\n' */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}

	/* 5. Add the final null terminator */
	str[k] = '\0';

	return (str);
}

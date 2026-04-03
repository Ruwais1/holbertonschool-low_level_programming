#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str is NULL
 * or if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len = 0;

	/* 1. If str is NULL, return NULL */
	if (str == NULL)
		return (NULL);

	/* 2. Calculate the length of the string */
	while (str[len] != '\0')
		len++;

	/* 3. Allocate memory (length + 1 for the null terminator) */
	dup = malloc((len + 1) * sizeof(char));

	/* 4. Check if malloc failed */
	if (dup == NULL)
		return (NULL);

	/* 5. Copy the string into the new memory */
	for (i = 0; i <= len; i++)
	{
		dup[i] = str[i];
	}

	/* 6. Return the pointer to the new string */
	return (dup);
}

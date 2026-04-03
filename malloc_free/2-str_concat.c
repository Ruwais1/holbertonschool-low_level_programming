#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, j, len1 = 0, len2 = 0;

	/* 1. Treat NULL as an empty string "" */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* 2. Calculate length of both strings */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* 3. Allocate memory (len1 + len2 + 1 for '\0') */
	concat = malloc((len1 + len2 + 1) * sizeof(char));

	/* 4. Check if malloc failed */
	if (concat == NULL)
		return (NULL);

	/* 5. Copy s1 into concat */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* 6. Copy s2 into concat right after s1 */
	for (j = 0; j < len2; j++, i++)
		concat[i] = s2[j];

	/* 7. Add the null terminator at the very end */
	concat[i] = '\0';

	return (concat);
}

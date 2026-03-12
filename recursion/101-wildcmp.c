#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if they can be considered
 * identical, otherwise return 0.
 * @s1: the first string
 * @s2: the second string, which can contain the wildcard *
 *
 * Return: 1 if identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	/* Base case: both strings reach the end */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If the characters match, move both pointers forward */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/* If we hit a wildcard in s2 */
	if (*s2 == '*')
	{
		/* If s1 is empty, our only option is to move s2 forward */
		if (*s1 == '\0')
			return (wildcmp(s1, s2 + 1));
		
		/* * Branch 1: Try skipping the character in s1 (wildcard matches it)
		 * Branch 2: Try moving past the wildcard in s2 (wildcard matches empty)
		 */
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	/* If characters don't match and there's no wildcard */
	return (0);
}

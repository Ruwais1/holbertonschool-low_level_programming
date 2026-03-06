#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char temp;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
		i++;
	}
}

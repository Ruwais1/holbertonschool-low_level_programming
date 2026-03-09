#include "main.h"


/**
* _strchr - locates a character in a string
* @s: the string to be searched
* @c: the character to be located
*
* Return: a pointer to the first occurrence of c, or NULL if not found
* /
*/

chr *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		if (*s == '\0')
			return (0);
	}
	s++;
}
return (0);
}



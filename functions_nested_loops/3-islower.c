#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character to check (represented as an integer)
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	/* التحقق إذا كانت قيمة c تقع بين 'a' و 'z' */
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

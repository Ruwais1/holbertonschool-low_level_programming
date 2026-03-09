#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer to a string
 * @to: pointer to the string to set
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	/* We use one asterisk to access the pointer that 's' points to */
	*s = to;
}

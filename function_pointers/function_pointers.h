#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name using a given function
 * @name: name of the person
 * @f: pointer to the printing function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	/* Safety check: ensure both pointers are not NULL */
	if (name != NULL && f != NULL)
	{
		/* Call the function 'f' and pass 'name' to it */
		f(name);
	}
}

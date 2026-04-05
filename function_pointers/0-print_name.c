#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: pointer to the printing function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
    /*  NULL */
    if (name != NULL && f != NULL)
    {
        /*� name لها */
        f(name);
    }
}

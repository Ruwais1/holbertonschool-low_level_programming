#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: number of bytes to allocate.
 *
 * Return: a pointer to the allocated memory.
 * if malloc fails, causes normal process termination with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	/* Attempt to allocate memory */
	ptr = malloc(b);

	/* If allocation fails, exit with status 98 */
	if (ptr == NULL)
	{
		exit(98);
	}

	/* Return the successfully allocated pointer */
	return (ptr);
}

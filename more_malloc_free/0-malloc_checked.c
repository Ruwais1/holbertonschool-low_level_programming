#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: number of bytes to allocate
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, causes normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	/* 1. Try to allocate the memory */
	ptr = malloc(b);

	/* 2. Check if the allocation failed */
	if (ptr == NULL)
	{
		/* Terminate the process with status 98 if it fails */
		exit(98);
	}

	/* 3. Return the pointer if successful */
	return (ptr);
}

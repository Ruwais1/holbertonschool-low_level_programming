#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: number of bytes to allocate.
 *
 * Return: a pointer to the allocated memory.
 * If malloc fails, causes process termination with status 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	/* Attempt to allocate memory */
	ptr = malloc(b);

	/* Check if the allocation failed */
	if (ptr == NULL)
	{
		/* Terminate the process with status code 98 */
		exit(98);
	}

	/* Return the pointer to the allocated memory */
	return (ptr);
}

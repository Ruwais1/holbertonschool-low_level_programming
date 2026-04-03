#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements in the array.
 * @size: size of each element in bytes.
 *
 * Return: pointer to allocated memory.
 * If nmemb or size is 0, or malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, total_size;

	/* 1. Check if input is 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* 2. Calculate total bytes needed */
	total_size = nmemb * size;

	/* 3. Allocate memory */
	ptr = malloc(total_size);

	/* 4. Check if malloc failed */
	if (ptr == NULL)
		return (NULL);

	/* 5. Set all memory to zero */
	for (i = 0; i < total_size; i++)
	{
		ptr[i] = 0;
	}

	/* 6. Return the clean pointer */
	return (ptr);
}

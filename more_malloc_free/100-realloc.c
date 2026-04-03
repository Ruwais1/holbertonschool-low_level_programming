#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: size in bytes of the allocated space for ptr.
 * @new_size: new size in bytes of the new memory block.
 *
 * Return: pointer to the newly allocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr;
	unsigned int i;

	/* 1. If sizes are equal, return the same pointer */
	if (new_size == old_size)
		return (ptr);

	/* 2. If ptr is NULL, it's just a normal malloc */
	if (ptr == NULL)
		return (malloc(new_size));

	/* 3. If new_size is 0 and ptr is not NULL, free and return NULL */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* 4. Allocate the new block */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	/* 5. Copy content from the old block to the new one */
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new_ptr[i] = old_ptr[i];
	}
	else
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = old_ptr[i];
	}

	/* 6. Free the old pointer and return the new one */
	free(ptr);
	return (new_ptr);
}

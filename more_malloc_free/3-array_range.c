#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: the minimum value (included).
 * @max: the maximum value (included).
 *
 * Return: pointer to the newly created array.
 * If min > max or malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	/* 1. Check if the range is valid */
	if (min > max)
		return (NULL);

	/* 2. Calculate how many integers we need */
	size = max - min + 1;

	/* 3. Allocate memory for the array */
	ptr = malloc(sizeof(int) * size);

	/* 4. Check if malloc failed */
	if (ptr == NULL)
		return (NULL);

	/* 5. Fill the array with values from min to max */
	for (i = 0; i < size; i++)
	{
		ptr[i] = min++;
	}

	/* 6. Return the pointer to the filled array */
	return (ptr);
}

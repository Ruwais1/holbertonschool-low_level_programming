#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char.
 * @size: the size of the array to create
 * @c: the char to initialize the array with
 *
 * Return: pointer to the array, or NULL if it fails or size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	/* Check if size is 0 as per requirements */
	if (size == 0)
	{
		return (NULL);
	}

	/* Allocate memory for the array */
	arr = malloc(size * sizeof(char));

	/* Check if memory allocation failed */
	if (arr == NULL)
	{
		return (NULL);
	}

	/* Initialize each element of the array with the char c */
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	/* Return the pointer to the newly created array */
	return (arr);
}

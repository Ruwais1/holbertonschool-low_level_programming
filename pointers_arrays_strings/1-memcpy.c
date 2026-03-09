#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy
 *
 * Return: a pointer to the destination (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	/* Start a loop to copy each byte from src to dest */
	for (i = 0; i < n; i++)
	{
		/* Copy the character at index i */
		dest[i] = src[i];
	}

	/* Return the pointer to the destination buffer */
	return (dest);
}

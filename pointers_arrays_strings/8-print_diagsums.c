#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the start of the matrix
 * @size: the size of the matrix (width and height)
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	long int sum1 = 0;
	long int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		/* Calculate the primary diagonal sum */
		sum1 += a[i * (size + 1)];

		/* Calculate the secondary diagonal sum */
		sum2 += a[(i + 1) * (size - 1)];
	}

	printf("%ld, %ld\n", sum1, sum2);
}

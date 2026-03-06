#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: buffer size
 *
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0, sum, carry = 0, d1, d2;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;

	if (i >= size_r || j >= size_r)
		return (0);

	i--;
	j--;
	while (i >= 0 || j >= 0 || carry)
	{
		d1 = (i >= 0) ? n1[i] - '0' : 0;
		d2 = (j >= 0) ? n2[j] - '0' : 0;
		sum = d1 + d2 + carry;
		carry = sum / 10;
		if (k >= size_r - 1)
			return (0);
		r[k++] = (sum % 10) + '0';
		i--;
		j--;
	}
	r[k] = '\0';
	/* Reverse the result */
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		carry = r[i];
		r[i] = r[j];
		r[j] = carry;
	}
	return (r);
}

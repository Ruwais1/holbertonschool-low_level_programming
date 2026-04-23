#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	/* Loop through the list as long as the current node is not NULL */
	while (h != NULL)
	{
		/* Print the integer stored in the node */
		printf("%d\n", h->n);
		count++;

		/* Move to the next node */
		h = h->next;
	}

	return (count);
}

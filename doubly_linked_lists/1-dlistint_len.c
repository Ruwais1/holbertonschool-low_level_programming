#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	/* Loop through the list as long as the current node is not NULL */
	while (h != NULL)
	{
		count++;
		h = h->next; /* Move to the next node */
	}

	return (count);
}

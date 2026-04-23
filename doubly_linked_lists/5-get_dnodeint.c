#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node, starting from 0
 *
 * Return: the nth node, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/* Loop as long as the node exists and we haven't reached the index */
	while (head != NULL && index > 0)
	{
		head = head->next; /* Move to the next node */
		index--;           /* Decrease the index */
	}

	/* Returns the target node, or NULL if out of bounds */
	return (head);
}

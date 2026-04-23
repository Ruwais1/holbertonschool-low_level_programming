#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: integer to add to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize the new node */
	new_node->n = n;
	new_node->next = NULL; /* Because it's the last node */

	/* If the list is empty, make it the head */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	/* Otherwise, traverse to the last node */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	/* Attach the new node at the end */
	temp->next = new_node;
	new_node->prev = temp; /* The extra step for Doubly Linked Lists */

	return (new_node);
}

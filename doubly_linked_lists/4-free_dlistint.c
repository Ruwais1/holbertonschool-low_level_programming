#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	/* Loop through the list until the end */
	while (head != NULL)
	{
		/* Save the current node */
		temp = head;
		
		/* Move head to the next node */
		head = head->next;
		
		/* Free the saved node */
		free(temp);
	}
}

#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;
	unsigned int len = 0;

	/* Check if the input string is NULL */
	if (str == NULL)
		return (NULL);

	/* Calculate the length of the string */
	while (str[len])
		len++;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Duplicate the string and store it in the node */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Initialize the new node */
	new_node->len = len;
	new_node->next = NULL; /* Because it will be the last node */

	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Otherwise, traverse the list to find the last node */
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	/* Attach the new node at the end */
	temp->next = new_node;

	return (new_node);
}

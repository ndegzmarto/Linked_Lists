#include "lists.h"

/**
 * add_node_end - add a newnode at the end of a linked list
 * @head: double pointer to the head node
 * @str: string added to the linked list
 *
 * Return: newnode at the end of the linked list
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

	newnode->str = strdup(str);
	newnode->len = strlen(newnode->str);
	newnode->next = NULL;


	/* if linked list is empty */
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		/* otherwise find the lastnode and make it the newnode */
		list_t *lastnode = *head;

		while (lastnode->next != NULL)
		{
			lastnode = lastnode->next;
		}
		lastnode->next = newnode;
	}
	return newnode;
}

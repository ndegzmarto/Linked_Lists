#include "lists.h"
/**
 * add_node - add node at the beginning of a linked lists
 * @head: double pointer to the head node
 * @str: string added to the node
 *
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return NULL;

	new->str = strdup(str);
	new->len = strlen(new->str);
	new->next = *head;
	*head = new;
	return new;
}


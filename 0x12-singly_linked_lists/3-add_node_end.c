#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *list;
	size_t num;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (num = 0; str[num]; num++)
		;

	new->len = num;
	new->next = NULL;
	list = *head;

	if (list == NULL)
	{
		*head = new;
	}
	else
	{
		while (list->next != NULL)
			list = list->next;
		list->next = new;
	}

	return (*head);
}

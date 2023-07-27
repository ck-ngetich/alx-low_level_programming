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

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	for (num = 0; str[num]; num++)
		;

	newnode->len = num;
	newnode->next = NULL;
	list = *head;

	if (list == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (list->next != NULL)
			list = list->next;
		list->next = newnode;
	}

	return (*head);
}

#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	size_t newcee;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	for (newcee = 0; str[newcee]; newcee++)
		;

	newnode->len = newcee;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}

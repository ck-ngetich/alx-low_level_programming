#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - add node at beginning of a list.
  * @head: head of double pointer
  * @n: int add the list
  * Return: NULL if it failed otherwise an added list
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_list;

	if (head == NULL)
		return (NULL);
	new_list = malloc(sizeof(listint_t));
	if (new_list == NULL)
		return (NULL);
	new_list->n = n;
	new_list->next = *head;
	*head = new_list;
	return (new_list);
}

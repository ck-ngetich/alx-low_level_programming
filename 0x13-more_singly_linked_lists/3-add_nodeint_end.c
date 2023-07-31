#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - add node at end of a list.
  * @head: head of  pointer
  * @n: int add the list
  * Return: NULL if it failed, otherwise new list
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_list;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	new_list = malloc(sizeof(listint_t));
	if (new_list == NULL)
		return (NULL);
	new_list->n = n;
	new_list->next = NULL;
	if (*head == NULL)
	{
	*head = new_list;
		return (new_list);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_list;
	return (new_list);
}

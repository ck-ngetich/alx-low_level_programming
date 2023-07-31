#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a list
 * @head: a double pointer
 *Return: nothing
 */
int pop_listint(listint_t **head)
{
	listint_t *list_head;
	int k;

	if (head == NULL || *head == NULL)
		return (0);
	list_head = *head;
	*head = list_head->next;
	k = list_head->n;
	free(list_head);
	return (k);
}

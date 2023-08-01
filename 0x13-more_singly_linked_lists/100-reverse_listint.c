#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - function that reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = next;
	}

	*head = temp;

	return (*head);
}

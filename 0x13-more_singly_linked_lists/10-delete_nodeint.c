#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes a node in a list at certain  index
 * @head: pointer to the first element in the list
 * @index: index of the node of a list
 * Return: Always 1 (Success) otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *list = NULL;
	unsigned int k = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (k < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		k++;
	}


	list = temp->next;
	temp->next = list->next;
	free(list);

	return (1);
}

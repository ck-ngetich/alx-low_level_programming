#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position in list.
 * @head: pointer to the first node
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new_list;
	listint_t *temp = *head;

	new_list = malloc(sizeof(listint_t));
	if (!new_list || !head)
		return (NULL);

	new_list->n = n;
	new_list->next = NULL;

	if (idx == 0)
	{
		new_list->next = *head;
		*head = new_list;
		return (new_list);
	}

	for (x = 0; temp && x < idx; x++)
	{
		if (x == idx - 1)
		{
			new_list->next = temp->next;
			temp->next = new_list;
			return (new_list);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}

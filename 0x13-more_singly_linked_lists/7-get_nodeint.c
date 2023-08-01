#include "lists.h"
/**
 * get_nodeint_at_index -  function that returns the node of a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the node otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *temp = head;

	while (temp && x < index)
	{
		temp = temp->next;
		x++;
	}
	return (temp ? temp : NULL);
}

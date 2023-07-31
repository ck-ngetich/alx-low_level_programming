#include "lists.h"

/**
 * listint_len -prints  number of elements in a linked list.
 * @h: head pointer
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num_elem = 0;

	while (h != NULL)
	{
	h = h->next;
		num_elem++;
	}
	return (num_elem);
}

#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - a function to  prints elements of a listint_t list.
 * @h: head of the node
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num_elem = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num_elem++;
		h = h->next;
	}
	return (num_elem);
}

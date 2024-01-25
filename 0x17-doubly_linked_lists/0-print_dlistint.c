#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: ptr to the head or start of the doubly linked list
 * Return: numbers of node
 */
size_t print_dlistint(const dlistint_t *h)
{
        int elem_node;

        for (elem_node = 0; h != NULL; elem_node++)
        {
                printf("%d\n", h->n);
                h = h->next;
        }
        return (elem_node);
}

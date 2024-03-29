#include "lists.h"

/**
 * get_dnodeint_at_index - function to locates a node
 * in a dlistint_t list.
 * @head: The head of the dlistint_t list.
 * @index: The node to locate.
 * Return: NULL if it doesn;t exist
 *         otherwise the address of the indexed node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
        for (; index != 0; index--)
        {
                if (head == NULL)
                        return (NULL);
                head = head->next;
        }

        return (head);
}

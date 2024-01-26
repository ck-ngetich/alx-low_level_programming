#include "lists.h"

/**
 * sum_dlistint - function that sums all of the data
 * of a dlistint_t linked list
 * @head: pointer to the beginning of the linked list
 * Return: sum of all data, else 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
        int add = 0;

        while (head != NULL)
        {
                add += head->n;
                head = head->next;
        }
        return (add);
}

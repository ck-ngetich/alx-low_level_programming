#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: ne number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = NULL;
	const listint_t *len = NULL;
	size_t count = 0;
	size_t new_node;

	temp = head;
	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;
		temp = temp->next;
		len = head;
		new_node = 0;
		while (new_node < count)
		{
			if (temp == len)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (count);
			}
			len = len->next;
			new_node++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}

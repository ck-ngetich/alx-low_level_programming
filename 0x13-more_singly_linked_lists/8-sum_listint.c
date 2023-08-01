#include "lists.h"
/**
 * sum_listint - a function to calculates the sum of all the data in list
 * @head: first node in the linked list
 * Return: sum of the data
 */
int sum_listint(listint_t *head)
{
	int list_sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		list_sum += temp->n;
		temp = temp->next;
	}
	return (list_sum);
}

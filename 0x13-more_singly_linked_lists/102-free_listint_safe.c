#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - frees a linked list with a loop
 * @h: pointer to the first node in the list
 * Return: size of the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int diff_list;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff_list = *h - (*h)->next;
		if (diff_list > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;
	return (length);
}

#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - Frees a linked list of integers
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list that were freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;

	size_t count = 0;

	if (!h || !*h)
		return (0);
	current = *h;
	*h = NULL;
	while (current)
	{
		count++;
		next = current->next;
		free(current);
		if (next >= current)
			break;
		current = next;
	}
	return (count);
}

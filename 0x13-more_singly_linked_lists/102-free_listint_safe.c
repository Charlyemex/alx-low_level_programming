#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - Frees a linked list of integers
 * @h: Pointer to a pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;

	size_t count = 0;

	if (!h || !*h)
		return (count);
	current = *h;
	*h = NULL;
	while (current)
	{
		count++;
		temp = current;
		current = current->next;
		if (temp <= current)
		{
			free(temp);
		}
		else
		{
			free(current);
			break;
		}
	}
	return (count);
}

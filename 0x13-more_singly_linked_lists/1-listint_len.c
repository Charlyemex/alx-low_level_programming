#include "lists.h"
/**
 * listint_len - Returns the number of elements in a linked lists
 * @h: A pointer to listint_t list head
 *
 * Return: The number of elements in the listint_t list
 */
size_t listint_len(const listint_t *h)
{
	siez_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

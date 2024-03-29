#include "lists.h"
/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the list.
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *current, *tmp;

	current = head;

	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
}

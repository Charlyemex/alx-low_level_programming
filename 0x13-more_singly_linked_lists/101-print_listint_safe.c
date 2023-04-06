#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - Prints a linked list of integers
 * @head: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise, *hare;

	size_t count = 0;

	if (!head)
		exit(98);
	tortoise = hare = head;
	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
			count++;
			break;
		}
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
	}
	if (!hare || !hare->next)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
	}
	while (tortoise && tortoise != hare)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
		tortoise = tortoise->next;
	}
	if (tortoise == hare)
	{
		printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
	}
	return (count);
}

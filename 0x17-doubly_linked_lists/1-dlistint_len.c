#include "lists.h"

/**
 * dlistint_len - return the number of elements in a linked list
 * Description: count the number of elements
 * @h: head of dlistint_t
 * Return: number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}

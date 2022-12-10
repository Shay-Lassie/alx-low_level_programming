#include "lists.h"

/**
 * get_dnodeint_at_index - return nth node in a linked list
 * @index: index of the node from 0
 * @head: head
 * Description: return node at given index
 * Return: NULL if node exists
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}

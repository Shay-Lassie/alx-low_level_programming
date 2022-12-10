#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of the node
 * Description: add head
 * @head: beginning of lisy
 * @n: integer of the new node to add
 * Return: address of new node else NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}

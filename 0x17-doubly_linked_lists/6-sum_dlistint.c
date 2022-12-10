#include "lists.h"

/**
 * sum_dlistint - return the sum of all the data of a linked list
 * Description: data is n
 * @head: head
 * Return: sum of 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

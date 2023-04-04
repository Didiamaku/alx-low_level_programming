#include "lists.h"

/**
 * reverse_listint - reverses linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pa;
	listint_t *na;

	pa = NULL;
	na = NULL;

	while (*head != NULL)
	{
		na = (*head)->next;
		(*head)->next = pa;
		pa = *head;
		*head = na;
	}

	*head = pa;
	return (*head);
}

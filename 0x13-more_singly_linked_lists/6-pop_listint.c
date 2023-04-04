#include "lists.h"

/**
 * pop_listint - deletes head node
 * a linked list
 * @head: head of list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int headnode;
	listint_t *h;
	listint_t *curlist;

	if (*head == NULL)
		return (0);

	curlist = *head;

	headnode = curlist->n;

	h = curlist->next;

	free(curlist);

	*head = h;

	return (headnode);
}

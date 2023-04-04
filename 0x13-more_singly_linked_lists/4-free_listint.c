#include "lists.h"

/**
 * free_listint - frees linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint(listint_t *head)
{
	listint_t *templist;

	while ((templist = head) != NULL)
	{
		head = head->next;
		free(templist);
	}
}

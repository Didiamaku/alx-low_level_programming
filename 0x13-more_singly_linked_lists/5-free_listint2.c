#include "lists.h"

/**
 * free_listint2 - frees linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *templist;
	listint_t *curlist;

	if (head != NULL)
	{
		curlist = *head;
		while ((templist = curlist) != NULL)
		{
			curlist = curlist->next;
			free(templist);
		}
		*head = NULL;
	}
}

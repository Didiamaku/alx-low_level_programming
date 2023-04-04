#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp2(listp_t **head)
{
	listp_t *tempnode;
	listp_t *curlist;

	if (head != NULL)
	{
		curlist = *head;
		while ((tempnode = curlist) != NULL)
		{
			curlist = curlist->next;
			free(tempnode);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node1 = 0;
	listp_t *hapter, *newnode, *add;
	listint_t *curlist;

	hapter = NULL;
	while (*h != NULL)
	{
		newnode = malloc(sizeof(listp_t));

		if (newnode == NULL)
			exit(98);

		newnode->p = (void *)*h;
		newnode->next = hapter;
		hapter = newnode;

		add = hapter;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hapter);
				return (node1);
			}
		}

		curlist = *h;
		*h = (*h)->next;
		free(curlist);
		node1++;
	}

	*h = NULL;
	free_listp2(&hapter);
	return (node1);
}

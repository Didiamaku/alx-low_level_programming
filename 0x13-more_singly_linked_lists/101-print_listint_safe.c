#include "lists.h"

/**
 * free_listp - frees linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
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
 * print_listint_safe - prints linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node1 = 0;
	listp_t *hapter, *newnode, *add;

	hapter = NULL;
	while (head != NULL)
	{
		newnode = malloc(sizeof(listp_t));

		if (newnode == NULL)
			exit(98);

		newnode->p = (void *)head;
		newnode->next = hapter;
		hapter = newnode;

		add = hapter;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hapter);
				return (node1);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node1++;
	}

	free_listp(&hapter);
	return (node1);
}

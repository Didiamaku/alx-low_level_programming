#include "lists.h"

/**
 * listint_len - returns number of elements
 * linked list.
 * @h: head of list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t node1 = 0;

	while (h != NULL)
	{
		h = h->next;
		node1 = node1 + 1;
	}
	return (node1);
}

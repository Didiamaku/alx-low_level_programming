#include "lists.h"

/**
 * print_listint - prints all elements in list.
 * @h: head in a list.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t node1 = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node1 = node1 + 1;
	}
	return (node1);
}

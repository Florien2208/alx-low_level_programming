#include "lists.h"

/**
 * listint_len - the number of elements in a linked list.
 * @h: head of a list.
 * Return: numbers of x.
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}

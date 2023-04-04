#include "lists.h"

/**
 * add_nodeint_end - new node at the end of a linked list
 * @head: head of a list.
 * @n: n element.
 * Return: address, NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *w;
	listint_t *p;

	(void)p;

	w = malloc(sizeof(listint_t));

	if (w == NULL)
		return (NULL);

	w->n = n;
	w->next = NULL;
	p = *head;
	if (*head == NULL)
	{
		*head = w;
	}
	else
	{
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = w;
	}

	return (*head);
}

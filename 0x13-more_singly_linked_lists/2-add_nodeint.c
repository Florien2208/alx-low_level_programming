#include "lists.h"

/**
 * add_nodeint - new node at the linked list
 * @head: head of a list.
 * @n: element.
 * Return: address of the new element. NUll if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *w;

	w = malloc(sizeof(listint_t));

	if (w == NULL)
		return (NULL);
	w->n = n;
	w->next = *head;
	*head = w;

	return (*head);
}

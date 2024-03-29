#include "lists.h"

/**
 * get_nodeint_at_index - returns a linked list
 * @head: head of a list.
 * @index: index of the list.
 * Return: nth node. If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}

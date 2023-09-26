#include "lists.h"

/**
 * listint_len - A function that returns the number of element in a linked list
 * @h: The linked list of type listint_t to traverse
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (num);

	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);

}

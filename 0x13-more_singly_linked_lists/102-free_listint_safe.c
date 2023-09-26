#include "lists.h"

/**
 * free_listint_safe - A function that frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: The number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *next;

	if (!h || !*h)
		return (0);

	current = *h;

	while (current != NULL)
	{
		next = current->next;

		free(current);
		count++;

		if (current <= next)
			break;

		current = next;
	}

	*h = NULL;

	return (count);
}

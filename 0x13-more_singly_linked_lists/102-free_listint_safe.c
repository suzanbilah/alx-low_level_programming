#include "lists.h"

/**
 * free_listint_safe - A function that frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: The number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	int dif;
	size_t le = 0;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h)
				*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;
	
	return (len);
}

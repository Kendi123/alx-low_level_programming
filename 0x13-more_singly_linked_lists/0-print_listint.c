#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to a linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h != NULL)
	{
		printf("%d\n", h->next);
		i++;
	}
	return (i);
}

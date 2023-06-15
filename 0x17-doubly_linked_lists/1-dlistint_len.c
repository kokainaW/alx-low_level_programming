#include "lists.h"

/**
 * dlistint_len_rec - the number of elements in a linked dlistint_t list.
 * @h: the double linked list.
 * @elements: the number of nodes.
 * Return: the number of elements value.
 */
size_t dlistint_len_rec(const dlistint_t *h, size_t elements)
{
	if (h)
		elements = dlistint_len_rec(h->next, elements + 1);
	return (elements);
}

/**
 * dlistint_len - will get the number of elements of a dlistint_t list.
 * @h: the double linked list.
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	return (dlistint_len_rec(h, 0));
}

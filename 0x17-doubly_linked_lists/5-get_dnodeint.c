#include "lists.h"
/**
 * get_node_rec - it gets the nth node of a dlistint_t linked list recursively.
 * @head: from pointer to list.
 * @n: number of nodes accumulated as param.
 * @index: the index of node to return.
 * Return: nth node.
 */
dlistint_t *get_node_rec(dlistint_t *head, unsigned int index, unsigned int n)
{
	if (head)
	{
		if (n == index)
			return (head);
		head = get_node_rec(head->next, index, n + 1);
	}
	return (head);
}
/**
 * get_dnodeint_at_index - it gets the nth node of a dlistint_t linked list.
 * @head: from double pointer to list.
 * @index: to index of wanted node.
 * Return: the wanted node by index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int n = 0;

	return (get_node_rec(head, index, n));
}

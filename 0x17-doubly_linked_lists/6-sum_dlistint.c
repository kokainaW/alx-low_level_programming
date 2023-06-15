#include "lists.h"
/**
 * sum_dlistint_rec - will sum node values of double linked list recursively.
 * @head: from pointer to list.
 * @sum: the sum of node's data.
 * Return: the sum.
 */
int sum_dlistint_rec(dlistint_t *head, int sum)
{
	if (head)
		sum = sum_dlistint_rec(head->next, sum + head->n);
	return (sum);
}
/**
 * sum_dlistint - it gets the nth node of a dlistint_t linked list.
 * @head: from pointer to list.
 * Return: the sum result.
 */
int sum_dlistint(dlistint_t *head)
{
	int n = 0;

	return (sum_dlistint_rec(head, n));
}

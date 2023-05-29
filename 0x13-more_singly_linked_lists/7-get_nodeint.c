#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a certain index in a linked list
 * @head: the First node in the linked list
 * @index: the Index of the node to return
 *
 * Return: the Pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}

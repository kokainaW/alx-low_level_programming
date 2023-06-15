/** # 0x17. C - Doubly linked lists by Ofiare Khoko**/
#include "lists.h"
/**
 * free_dlistint - it frees a dlistint_t list.
 * @head: the pointer to list head.
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}


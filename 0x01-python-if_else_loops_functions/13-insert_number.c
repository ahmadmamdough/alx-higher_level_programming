#include <stdlib.h>
#include "lists.h"
/**
 * insert_node - inserts node
 * @head: head
 * @number: value
 * Return: node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *it = *head;

	if (node == NULL)
		return (NULL);

	node->n = number;

	if (it == NULL)
	{
		*head = node;
		it->next = NULL;
		return (node);
	}

	if (it->n >= number)
	{
		node->next = it;
		*head = node;
		return (node);
	}

	while (it->next)
	{
		if (it->next->n < number)
			it = it->next;
		else
			break;
	}

	node->next = it->next;
	it->next = node;

	return (node);

}

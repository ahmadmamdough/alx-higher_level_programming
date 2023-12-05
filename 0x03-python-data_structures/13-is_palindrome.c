#include "lists.h"
#include <stdlib.h>

/**
 * is_palindrome - checks singly linked list
 * @head: the list
 * Return: always void
 */

int is_palindrome(listint_t **head)
{
	listint_t *it = *head;
	int len = 0, i, j;
	int *buf = NULL;

	if (!it)
		return (1);

	while (it)
	{
		len++;
		it = it->next;
	}

	buf = malloc(len * sizeof(int));
	it = *head;
	for (i = 0; i < len; i++)
	{
		buf[i] = it->n;
		it = it->next;
	}

	for (i = 0; i < len / 2; i++)
	{
		j = len - 1 - i;

		if (buf[i] != buf[j])
		{
			free(buf);
			return (0);
		}
	}

	free(buf);
	return (1);
}

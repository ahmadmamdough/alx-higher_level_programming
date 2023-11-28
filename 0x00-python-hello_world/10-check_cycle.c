#include "lists.h"
/**
 * check_cycle - checks for cycle
 * @list: head
 * Return: 0 or 1
 */
int check_cycle(listint_t *list)
{
	listint_t *it = list;

	if (!list)
		return (0);

	while (it->next)
	{
		it = it->next;
		if (it == list)
			return (1);
	}
	return (check_cycle(list->next));
}

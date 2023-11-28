#include "lists.h"
/**
 * check_cycle - checks for cycle
 * @list: head
 * Return: 0 or 1
 */
int check_cycle(listint_t *list)
{
	listint_t *it = list;
	listint_t *i = list;

	if (!list)
		return (0);

	while (i && it && i->next)
	{
		it = it->next;
		i = i->next->next;

		if (it == i)
			return (1);
	}
	return (0);
}

#include "lists.h"
#include <stdio.h>
/**
  * print_listint - function that prints all the
  * elements of a listint_t list.
  * @h: pointer to defined type
  * Return:  return count
  */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		if (h->next != 0)
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		count++;
	}
	return (count);

}

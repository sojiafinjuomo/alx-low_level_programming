#include "lists.h"
/**
  * dlistint_len -  function that returns the number
  *		      of elements in a linked dlistint_t
  * @h: header to the struct node
  *
  * Return: elements
  *
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}

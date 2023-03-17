#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
  * print_dlistint - function that prints all the elements of a dlistint_t list
  * @h: points to the struct node
  * Return: return node count
  *
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		node_count++;
		printf("%d elements\n", h->n);
		h = h->next;
	}
	return (node_count);

}

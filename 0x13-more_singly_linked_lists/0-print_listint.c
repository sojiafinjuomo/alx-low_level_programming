#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * print_listint - function that prints all the
  * elements of a listint_t list.
  * @h: pointer to defined type
  * Return:  return count
  */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;
	const listint_t *temp = h;

	while (temp != 0)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);

}

#include "lists.h"
/**
  * listint_len - function that returns the number
  * of elements in a linked listint_t list
  * @h: pointer to struct node
  * Return: return count
  */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count = 0;

	while (temp != 0)
	{
		count++;
		temp = temp->next;
	}
	return (count);

}

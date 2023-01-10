#include <stdlib.h>
#include "main.h"
/**
  * create_array - function that creates an array of chars,
  * and initializes it with a specific char
  * @size: argument
  * @c: character argument
  * Return: Null or *c
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *arr = (char *)malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

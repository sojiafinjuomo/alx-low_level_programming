#include "main.h"
#include <stdlib.h>
/**
  * _calloc - function that allocates memory for an array
  * @nmemb: array
  * @size: size of array
  * Return: return pointer or Null
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	/*char *s;*/
	unsigned int i;
	unsigned int *ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = '0';
	}
	return (ptr);
}

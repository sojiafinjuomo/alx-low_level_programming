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
	char *s;
	unsigned int i;
	void *ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	s = ptr;
	for (i = 0; i < (size * nmemb) ; i++)
	{
		s[i] = '\0';
	}
	return (ptr);
}

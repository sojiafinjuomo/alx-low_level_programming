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
	char *str;
	void *len;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	len = malloc(size * nmemb);
	if (len == NULL)
		return (NULL);
	str = len;
	for (i = 0; i < (size * nmemb); i++)
		str[i] = '\0';
	return (len);
}

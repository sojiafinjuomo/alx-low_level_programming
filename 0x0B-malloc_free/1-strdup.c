#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
  * _strdup - function that returns a pointer to a newly allocated
  * space in memory, which contains a copy of the string given
  * as a parameter
  * @str: parameter
  * Return: Nonzero or Null
  *
  */
char *_strdup(char *str)
{
	int i, len = 0;

	char *dup;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		len++;
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		dup[i] = str[i];
	dup[len] = '\0';
	return (dup);
}

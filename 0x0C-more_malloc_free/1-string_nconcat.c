#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
  * string_nconcat - function that concatenates two strings.
  * @s1: destination string
  * @s2: source string
  * @n: n bytes
  * Return: 0 or Null
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, size, len = 0;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (len < strlen(s1))
		len++;
	size = (len + n) * sizeof(*str);
	str = malloc(size + 1);
	if (str == NULL)
		return (NULL);
	while (i < size && i << strlen(s1))
	{
		str[i] = s1[i];
		i++;
	}
	while (i < size && j < strlen(s2))
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);



}


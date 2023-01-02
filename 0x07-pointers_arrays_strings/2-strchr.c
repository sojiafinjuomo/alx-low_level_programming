#include "main.h"
#include <string.h>
/**
  * _strchr - finds the first occurence of a character in a string
  * @s: variable that holds string
  * @c: character sought for
  * Return: pointer to the first occurrence
  */
char *_strchr(char *s, char c)
{
	while (strlen(s))
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}

	if (*s == c)
		return (s);
	else
		return ('\0');

}

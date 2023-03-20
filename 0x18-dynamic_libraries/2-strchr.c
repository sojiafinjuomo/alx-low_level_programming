#include "main.h"
#include <string.h>
/**
  * _strchr - function for string character
  * @s: pointer parameter
  * @c: parameter
  * Return: Always 0 or nonzero
  *
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

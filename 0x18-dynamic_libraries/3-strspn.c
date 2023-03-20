#include "main.h"
#include <string.h>
/**
  * _strspn - function for strspn
  * @s: pointer paramete
  * @accept: parameter
  * Return: Always 0 or nonzero
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; i < strlen(s); i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}

#include "main.h"
/**
  * _strpbrk - function for strpbrk
  * @s: pointer parametr
  * @accept: second parametr
  * Return: return @s and nonzero
  */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}

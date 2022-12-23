#include "main.h"
/**
  * _strcmp - string to compere stings
  * @s1: first string to compare
  * @s2: second string
   *Return: S1 and S2
  */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

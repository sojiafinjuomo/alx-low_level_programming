#include "main.h"
#include <string.h>
/**
  * _strcmp - function for string compare
  * @s1: pointer parameter
  * @s2: second pointer parameter
  * Return: Always 0 and nozero
  */
int _strcmp(char *s1, char *s2)
{
	while (((strlen(s1)) && (strlen(s2))) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (*s1 != *s2)
		return (*s1 - *s2);
	return (0);
}

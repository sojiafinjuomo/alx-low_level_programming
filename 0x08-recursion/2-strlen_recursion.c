#include "main.h"
#include <string.h>
/**
  * _strlen_recursion - function that returns the length of a string
  * @s: pointing to the string
  * Return: return 0 or nonzero
  */
int _strlen_recursion(char *s)
{
	if (strlen(s) == 0)
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));

}

#include "main.h"
/**
  * _strlen - function to return length
  * @s: to compare
  * Return: @length is returned
  */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

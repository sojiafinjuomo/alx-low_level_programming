#include "main.h"
/**
  * _strcpy - function to copy strings
  * @src: source variable
  * @dest: destination variable
  * Return: Always dest
  */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		dest[j] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

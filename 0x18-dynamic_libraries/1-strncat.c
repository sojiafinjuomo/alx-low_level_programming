#include "main.h"
/**
  * _strncat - function performs strncat
  * @dest: destination
  * @src: source
  * @n: parameter
  * Return: Always 0
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_len = 0;

	while (dest[i++])
		dest_len++;
	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];
	return (dest);
}


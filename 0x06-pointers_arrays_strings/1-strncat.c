#include "main.h"
/**
  * _strncat -function to concatenate two strings
  * @dest: string  to be appended to
  * @src: string to append
  * @n: Number of bytes from src
  * Return: return @dest
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

#include "main.h"
/**
  * _strncpy - function to copy string
  * @dest: destination to copy to
  * @src: copy source
  * @n: number of bytes to copy
  * Return: return @dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int src_len = 0;

	while (src[i++])
		src++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = src_len; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

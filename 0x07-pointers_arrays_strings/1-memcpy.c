#include "main.h"
/**
  * _memcpy - function copies n bytes from source to destination
  * @dest: memory area to be copied to
  * @src: memory area to copy from
  * @n: unsigned int variable
  * Return: return @dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);

}


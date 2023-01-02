#include "main.h"
/**
  * _memset - function fills the first n bytes of the memory area
  * pointed to s with the constant byte b
  * @s: pointer variable
  * @b: constant parameter
  * @n: unsigned int parametere
  * Return: return @s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

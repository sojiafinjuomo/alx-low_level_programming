#include "main.h"
/**
  * _strcat - function that concatenates strings together
  * @dest: dest
  * @src: source
  * Return: @dest
  */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dlen = 0;

	while (dest[i++])
		dlen++;
	for (i = 0; src[i]; i++)
		dest[dlen++] = src[i];
	return (dest);
}

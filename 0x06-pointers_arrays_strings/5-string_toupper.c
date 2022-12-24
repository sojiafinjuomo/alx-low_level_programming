#include "main.h"
/**
  * string_toupper - function to change all lowercase letters to uppercase
  * @s: string to be changed
  * Return: return @s
  *
  */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return (s);
}


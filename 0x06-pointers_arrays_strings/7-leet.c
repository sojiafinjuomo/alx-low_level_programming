#include "main.h"
/**
  * leet - function to encode a string into 1337
  * @s: string to encode
  * Return: return @s
  *
  */
char *leet(char *s)
{
	int i = 0;
	int i2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i])
	{
		for (i2 = 0; i2 <= 7; i2++)
		{
			if (s[i] == leet[i2] ||
				s[i] - 32 == leet[i2])
				s[i] = i2 + '0';
		}
		i++;
	}
	return (s);
}

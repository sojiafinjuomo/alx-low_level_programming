#include "main.h"
/**
  * binary_to_uint - function that converts
  * a binary number to an unsigned int
  * @b: points to string of char 0 and 1
  * Return: return decimal or 0 if b is null
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		decimal = (decimal << 1) + (*b++ - '0');
	}
	return (decimal);
}

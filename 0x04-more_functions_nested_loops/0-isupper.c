#include "main.h"
/**
  * _isupper - entry points tocheck capital letter
  *
  * @c: argument
  *
  * Return: 1 and 0 Always success
  */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}

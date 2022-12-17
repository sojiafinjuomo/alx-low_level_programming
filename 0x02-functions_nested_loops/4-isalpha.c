#include "main.h"
/**
  * _isalpha - prints alphabet
  *
  * @c : parameter
  *
  * Return: 1 or 0 Always
  */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') && (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

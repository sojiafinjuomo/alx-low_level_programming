#include "main.h"
/**
  * _isdigit - function checking for digit
  * @c: parameter
  * Return: Always 0
  *
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

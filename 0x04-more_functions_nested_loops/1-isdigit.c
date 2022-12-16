#include "main.h"
/**
  * _isdigit- Entry point
  *
  * int: data type
  *
  * @c: expected return value
  *
  * Return: Always 1 (success)
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
	return (1);
else
	return (0);
}

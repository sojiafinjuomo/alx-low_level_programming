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
if (c >= 0 && c <= 9)
	return (1);
else
	return (0);
}

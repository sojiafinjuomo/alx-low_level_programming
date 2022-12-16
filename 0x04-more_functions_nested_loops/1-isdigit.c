#include "main.h"
/**
  * _isdigit - entry point
  *
  * int: data type
  *
  * @c: expected return value
  *
  * Return : 1 Always
 */

int _isdigit(int c)
{
if (c >= 0 && c <= 9)
	return (1);
else
	return (0);
}

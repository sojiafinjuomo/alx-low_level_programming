#include "main.h"
/**
  * _isdigit - entry point
  *
  * int: data type
  *
  * @c: integer valu to be checked
  *
  * Return : Always 1 or 0
 */
int _isdigit(int c)
{
if (c >= 0 && c <= 9)
	return (1);
else
	return (0);
}

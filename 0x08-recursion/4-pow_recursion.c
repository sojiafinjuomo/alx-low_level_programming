#include "main.h"
#include <math.h>
/**
  * _pow_recursion - function that returns the value of x raised
  * to the power of y
  * @x: parameter
  * @y: parameter
  * Return: return 0 or nonzero
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (1);
}

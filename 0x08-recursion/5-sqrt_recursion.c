#include "main.h"
int _sqrt(int x, int n);

/**
  * _sqrt - function that returns actual square root
  * @x: test parameter
  * @n: parameter
  * Return: return 0 or nonzero
  */
int _sqrt(int x, int n)
{
	if ((x * x) == n)
		return (x);
	return (_sqrt(x + 1, n));
}
/**
  * _sqrt_recursion - function that returns the natural square root
  * @n: parametr
  * Return: return 0 or nonzero
  */
int _sqrt_recursion(int n)
{
	int x = 0;

	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(x, n));
}

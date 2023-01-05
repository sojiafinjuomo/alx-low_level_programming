#include "main.h"
/**
  * _prime - function that  actually gets prime number
  * @n: parameter
  * @y: parameter
  * Return: returns 0 or nonzero
  *
  */

int _prime(int n, int y)
{
	if (n % y == 0)
	{
		if (n == y)
			return (1);
		return (0);
	}
	return (0 + (_prime(n, y + 1)));
}
/**
  * is_prime_number - function that returns 1 if the input integer
  * is a prime number, otherwise return 0
  * @n: parameter
  * Return: returns 0 or nonzero
 */
int is_prime_number(int n)
{
	int y = 2;

	if (n == 0 || n == 1)
		return (0);
	return (_prime(n, y));
}

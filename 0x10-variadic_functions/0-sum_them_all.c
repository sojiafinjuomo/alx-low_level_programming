#include <stdarg.h>
#include <stdio.h>
/**
  * sum_them_all - function that returns the sum of all its parameters.
  * @n: expected number of arguments
  * Return: return total
  *
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i =1;
	int count, total = 0;

	if (n == 0)
		return (0);
	va_start(args, n);
	while (i < n)
	{
		count = va_arg(args, int);
		total = total + count;
		i++;
	}
	va_end(args);
	return (total);


}

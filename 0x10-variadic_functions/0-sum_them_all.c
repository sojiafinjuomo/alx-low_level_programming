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
	unsigned int i = 1;

	va_start(args, n);
	unsigned int count = va_arg(args, unsigned int);
	unsigned int total = count;

	while (i < n)
	{
		count = va_arg(args, unsigned int);
		total += count;
		i++;
	}
	va_end(args);
	return (total);


}

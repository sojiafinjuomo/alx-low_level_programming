#include <stdarg.h>
#include <stdio.h>
/**
  * print_numbers - function print numbers and string followed
  * by a new line
  * @separator: string
  * @n: unknown argument
  *
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int number;

	if (n != 0)
	{
		va_start(args, n);
		while (i < n)
		{
			number = va_arg(args, int);
			printf("%d", number);
			if (separator != NULL && i < n - 1)
				printf("%s", separator);
			i++;
		}

	}
	va_end(args);
	printf("\n");
}

#include <stdarg.h>
#include <stdio.h>
/**
  * print_strings - function that prints strings, followed by a new line.
  * @separator: string
  * @n: number of strings passed to the fn
  *
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *ch;

	if (n > 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			ch = va_arg(args, char *);
			if (ch == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", ch);
			if (separator != NULL && i != n - 1)
				printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n");

}


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

	if (separator != NULL)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			if (ch == NULL)
				printf("nil");
			ch = va_arg(args, char *);
			printf("%s", ch);
			if (separator != NULL && i < n - 1)
				printf("%s", separator);
		}
		va_end(args);
		printf("\n");

	}

}

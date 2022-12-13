#include <stdio.h>

/**
 * main- entry points
 *
 *Return: 0 for success
 *
 */


int main(void)
{
	int c;
	int e;

	for (c = 0; c < 100; c++)
	{
		for (e = 0; e < 100; e++)
		{
			if (c < e)
			{
				putchar(c);
				putchar(c);
				putchar(' ');
				putchar(e);
				putchar(e);

				if (c != 98 || e != 99)
				{
					putchar(';');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

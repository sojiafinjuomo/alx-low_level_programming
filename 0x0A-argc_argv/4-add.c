#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
  * main - entry point
  * @argc: argument count
  * @argv: argument vector
  * Return: Always 0 and 1
  */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] < '0' ||  argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
}

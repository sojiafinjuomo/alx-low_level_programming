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
	int i;

	if (argc == 1)
	{
		printf("0\n");

		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!(isdigit(*argv[i])))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum = sum + atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
}

#include <stdlib.h>
#include <stdio.h>
/**
  * main - entry point
  * @argc: argument counter
  * @argv: argument vector
  * Return: Always 0 or 1
  */
int main(int argc, char *argv[])
{
	int mul = 1;
	int i;

	if (argc == 3)
	{
		for (i = 1; i < 3; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

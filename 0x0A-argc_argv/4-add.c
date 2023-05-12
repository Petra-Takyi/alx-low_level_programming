#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
  * main - Entry point
  * Description - 'Program that adds positive integers'
  * @argc: number of arguments
  * @argv: number of array of arguments passed
  * Return: Always 0 (sucess)
  */

int main(int argc, char *argv[])
{
	int h, j;
	int total = 0;

	if (argc < 1)
	{
		printf("0\n");
	}

	for (h = 1; h < argc; h++)
	{
		total += atoi(argv[h]);

		for (j = 0; argv[h][j] != '\0'; j++)
		{
			if (!(isdigit(argv[h][j])))
			{
				printf("Error\n");

				return (0);
			}
		}
	}

	printf("%d\n", total);

	return (0);

}

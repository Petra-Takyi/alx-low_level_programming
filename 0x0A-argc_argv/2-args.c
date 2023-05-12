#include "main.h"
#include <stdio.h>

/**
  * main - Entry point
  * Description - 'Printing all arguments one at a time'
  * @argc: number of arguments
  * @argv: array of arguments passed
  * Return: Always 0 (sucess)
  */

int main(int argc, char *argv[])
{
	int h;

	for (h = 0; h < argc; h++)
	{
		printf("%s\n", argv[h]);
	}
	return (0);

}

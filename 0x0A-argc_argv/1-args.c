#include "main.h"
#include <stdio.h>

/**
  * main - Entry point
  * Description - 'Printing number of arguments passed"
  * @argc: number of arguemnts
  * @argv: array of arguments passed
  * Return: Always 0 (sucess)
  */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}

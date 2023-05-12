#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - Entry point
  * Description - 'A program printing the min number of coins'
  * @argc: number of arguments
  * @argv: array of arguments passed
  * Return: Always 0 (sucess)
  */

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins;
	int h;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_coins = 0;
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (h = 0; h < 5; h++)
	{
		num_coins += cents / coins[h];
		cents %= coins[h];
	}

	printf("%d\n", num_coins);

	return (0);
}




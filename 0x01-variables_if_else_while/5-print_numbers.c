#include <stdio.h>

/**
 * main - Entry point
 * Description - 'printing all single digits numbers of base 10'
 * Return: always 0 (sucess)
 */

int main(void)
{
	int h;

	for (h = 0; h <= 9; h++)
	{
		printf("%d", h);
	}
	printf("\n");
	return (0);
}

#include "main.h"

/**
  * print_chessboard - Entry point
  * Description - 'a function that prints the chessboard'
  * @a: pointer to pieces to print
  * Return: void
  */

void print_chessboard(char (*a)[8])
{
	int h, j;

	for (h = 0; h < 8; h++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[h][j]);
		}
		_putchar('\n');
	}
}

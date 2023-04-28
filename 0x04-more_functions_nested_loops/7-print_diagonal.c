#include "main.h"

/**
  * print_diagonal - Entry point
  * Description - 'function printing a diagonal line in terminal'
  * @n: number of times line is printed
  * Return: Always 0 (sucess)
  */

void print_diagonal(int n)
{
	int a, h;

	if (n <= 0)
		_putchar('\n');
	for (a = 0; a < n; a++)
	{
		for (h = 0; h < a; h++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

#include "main.h"

/**
  * print_line - Entry point
  * Description - 'printing a straight line'
  * @n: number of times line is printed
  * Return: Always 0 (sucess)
  */

void print_line(int n)
{
	int h;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (h = 0; h < n; h++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
}


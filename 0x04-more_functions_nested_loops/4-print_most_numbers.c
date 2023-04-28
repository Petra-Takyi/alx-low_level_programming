#include "main.h"

/**
  * print_most_numbers - Entry point
  * Description - 'print 0 to 9 except 2 and 4'
  * Return: Always 0 (sucess)
  */

void print_most_numbers(void)
{
	int h = 0;

	for (h = 0; h <= 9; h++)
	{
		if (h == 2 || h == 4)
		{
			continue;
		}
		else
		{
			_putchar(h + '0');
		}
	}
	_putchar('\n');
}

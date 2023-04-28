#include "main.h"

/**
  * more_numbers - Entry point
  * Description - 'prints digits 0-14, ten times'
  * Return: Always 0 (sucess)
  */

void more_numbers(void)
{
	int j;
	int h;

	for (j = 0; j < 10; j++)
	{
		for (h = 0; h <= 14; h++)
		{
			if (h >= 10)
			{
				_putchar((h / 10) +  48);
			}
			_putchar((h % 10) + 48);
		}
		_putchar('\n');
	}
}


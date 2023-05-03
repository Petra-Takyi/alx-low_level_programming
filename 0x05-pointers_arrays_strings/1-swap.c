#include <stdio.h>

/**
  * swap_int - Entry point
  * Description - 'a function that swaps the value of two integers'
  * @a: first integer to be swapped
  * @b: second integer to be swapped
  * Return: void
  */

void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}

#include "main.h"

/**
  * reverse_array - Entry point
  * Description - 'a function reversing elements of an array'
  * @a: the array
  * @n: array elements
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int h, tempo;

	for (h = 0; h < n--; h++)
	{
		tempo = a[h];
		a[h] = a[n];
		a[n] = tempo;
	}
}

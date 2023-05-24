#include "function_pointers.h"
#include <stdio.h>

/**
  * array_iterator - Entry point
  * Description - 'function that executes a function given as
  * a parameter on each element of an array'
  * @array: array to be iterated over
  * @size: size of the array
  * @action: function pointer
  * Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int h;

	if (array == NULL || action == NULL) /**
					      *if the array and the function
					      * pointer have nothing, return
					      *nothing
					      */
	{
		return;
	}

	for (h = 0; h < size; h++)
	{
		action(array[h]);
	}
}

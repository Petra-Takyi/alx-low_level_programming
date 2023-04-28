#include "main.h"

/**
  * _isupper - Entry point
  * Description - 'checking whether a variable c is uppercased or not'
  * @c: character to be checked
  * Return: 1 if uppercase, 0 if otherwise
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

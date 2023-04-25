#include "main.h"

/**
  * _islower - Entry point
  * Description - 'checks whether c is lowercase or otherwise'
  * Return: 1 confirms lowercase, 0 otherwise
  * @c: The  character to be checked
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

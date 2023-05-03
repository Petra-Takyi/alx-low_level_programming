#include "main.h"

/**
  * _strlen - Entry point
  * Description - 'a function printing the length of a string'
  * @s: string to be measured
  * Return: length of s
  */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

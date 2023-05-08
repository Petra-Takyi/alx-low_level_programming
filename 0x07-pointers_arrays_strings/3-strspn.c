#include "main.h"

/**
  * _strspn - Entry point
  * Description - 'a function that gets the length of a prefix substring'
  * @s: string to be used
  * @accept: string length to be found
  * Return: the number of bytes in the initial segment of s
  * which consist only of bytes from accept
  */

unsigned int _strspn(char *s, char *accept)
{
	int h, j;

	for (h = 0; s[h] != '\0'; h++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[h] == accept[j])
			{
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (h);
}

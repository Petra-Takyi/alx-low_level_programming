#include "main.h"

/**
  * *_strpbrk - Entry point
  * Description - 'a function that searches a string for any of a set of bytes'
  * @s: string to be used
  * @accept: string to be treated within s
  * Return: a pointer to the byte in s that matches one of the bytes in accept
  * or 0 if no such byte is found
  */

char *_strpbrk(char *s, char *accept)
{
	int h, j;

	for (h = 0; s[h] != '\0'; h++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[h] == accept[j])
			{
				return (&s[h]);
			}
		}
	}
	return (0);
}

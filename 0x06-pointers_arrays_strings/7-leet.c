#include "main.h"

/**
  * *leet - Entry point
  * Description - 'function encoding a string into 1337 using ascii table'
  * @s: string to be used
  * Return: pointer to string
  */

char *leet(char *s)
{
	int h = 0, j;
	int lower[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (s[h] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[h] == lower[j] || s[h] == upper[j])
			{
				s[h] = num[j];
				break;
			}
		}
		h++;
	}
	return (s);
}

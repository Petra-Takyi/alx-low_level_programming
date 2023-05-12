#include "main.h"

/**
  * *_strstr - Entry point
  * Description - 'a function that locates a substring'
  * @haystack: string to be used
  * @needle: string to be located
  * Return: a pointer to the beginning of the located substring
  * or NULL if the substring is not found
  */

char *_strstr(char *haystack, char *needle)
{
	int h, j;

	for (h = 0; haystack[h]; h++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[h + j] != needle[j])
			{
				break;
			}
		}
		if (!needle[j])
		{
			return (&haystack[h]);
		}
	}
	return (0);
}

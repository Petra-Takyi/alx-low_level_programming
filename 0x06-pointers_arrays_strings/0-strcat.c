#include "main.h"

/**
  * *_strcat - Entry point
  * Description - 'a function concantenating two strings'
  * @dest: char string type
  * @src: char string type
  * Return: pointer to dest
  */

char *_strcat(char *dest, char *src)
{
	int h = 0;
	int j;

	while (dest[h] != '\0')
	{
		h++;
	}
	for (j = 0; src[j] != '\0'; j++, h++)
	{
	dest[h] = src[j];
	}
	dest[h] = '\0';
	return (dest);
}

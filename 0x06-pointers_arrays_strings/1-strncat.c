#include "main.h"

/**
  * *_strncat - Entry point
  * Description - 'function concantenating two strings with n as parameter'
  * @src: char string type
  * @dest: char string type destination
  * @n: maximum number of bytes to be used
  * Return: pointer to dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int h = 0;
	int j;

	while (dest[h] != '\0')
	{
		h++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, h++)
	{
		dest[h] = src[j];
	}
	dest[h] = '\0';
	return (dest);
}

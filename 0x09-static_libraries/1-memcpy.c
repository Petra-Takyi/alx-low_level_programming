#include "main.h"

/**
  * *_memcpy - Entry point
  * Description - 'a function that copies memory area'
  * @dest: destination char string type
  * @src: original char string type
  * @n: maximum number of bytes
  * Return: pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int h;

	for (h = 0; h < n; h++)
	{
		dest[h] = src[h];
	}
	return (dest);
}

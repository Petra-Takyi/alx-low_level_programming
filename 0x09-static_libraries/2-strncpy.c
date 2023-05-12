#include "main.h"

/**
  * *_strncpy - Entry point
  * Description - 'a function that copies a string'
  * @dest: destination char string type
  * @src: initial char string type
  * @n: maximum number of bytes to be used
  * Return: pointer to dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int cob;

	for (cob = 0; cob < n && src[cob] != '\0'; cob++)
	{
		dest[cob] = src[cob];
	}
	for (; cob < n; cob++)
	{
		dest[cob] = '\0';
	}
	return (dest);
}


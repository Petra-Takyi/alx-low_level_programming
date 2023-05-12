#include "main.h"

/**
  * *_memset - Entry point
  * Description - ' a function that fills memory with a constant byte'
  * @s: memory area pointed to by s
  * @b: constant byte
  * @n: maximum number of bytes
  * Return: a pointer to the memory area s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int h = 0;

	for (h = 0; h < n; h++)
	{
		s[h] = b;
	}
	return (s);
}

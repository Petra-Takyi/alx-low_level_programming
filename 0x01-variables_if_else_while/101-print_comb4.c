#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - Entry point
  *Description: 'print possible different combinations of three digits'
  *Return: always 0 (sucess)
  */
int main(void)
{
	int h, a, w;

	for (h = '0'; h < '9'; h++)
	{

	for (a = h + 1; a <= '9'; a++)
	{

	for (w = a + 1; w <= '9'; w++)
	{
	if ((a != h) != w)
	{
	putchar(h);
	putchar(a);
	putchar(w);
	if (h == '7' && a == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}

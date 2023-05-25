#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Entry point
 * Description -'a function that prints anything'
 * @format: a list of types of arguments passed to the function.
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	unsigned int h = 0, j, c = 0;
	char *str;
	const char types[] = "cifs";

	va_start(arguments, format);
	while (format && format[h])
	{
		j = 0;
		while (types[j])
		{
			if (format[h] == types[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[h])
		{
		case 'c':
			printf("%c", va_arg(arguments, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(arguments, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(arguments, double)), c = 1;
			break;
		case 's':
			str = va_arg(arguments, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} h++;
	}
	printf("\n"), va_end(arguments);
}

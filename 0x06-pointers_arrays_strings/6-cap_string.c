#include "main.h"

/**
  * *cap_string - Entry point
  * Description - 'a function capitalizing all first words of a string'
  * @s: string to be treated
  * Return: pointer to s
  */

char *cap_string(char *s)
{
	int h;

	h = 0;

	while (s[h] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[h] == ' ' || s[h] == '\t' || s[h] == '\n'
		|| s[h] == ',' || s[h] == ';' || s[h] == '.'
		|| s[h] == '!' || s[h] == '?' || s[h] == '"'
		|| s[h] == '(' || s[h] == ')' || s[h] == '{'
		|| s[h] == '}')
		{
			if (s[h + 1] >= 97 && s[h + 1] <= 122)
			{
				s[h + 1] = s[h + 1] - 32;
			}
		}
		h++;
	}
	return (s);
}


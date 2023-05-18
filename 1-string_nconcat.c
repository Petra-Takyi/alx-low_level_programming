#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes of s2 to concatenate.
 *
 * Return: Pointer to the concatenated string (s1 + s2), or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *concat;

	/* Handle NULL strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Determine lengths of s1 and s2 */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	/* Adjust n if it exceeds the length of s2 */
	if (n >= len2)
		n = len2;

	/* Allocate memory for the concatenated string */
	concat = malloc((len1 + n + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	/* Copy s1 to the concatenated string */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copy the first n bytes of s2 to the concatenated string */
	for (j = 0; j < n; j++)
		concat[i++] = s2[j];

	concat[i] = '\0'; /* Null-terminate the concatenated string */

	return (concat);
}


#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: The string to be modified
 *
 * Return: void
 */

void rev_string(char *s)

{
	int len, e, k;
	char tmp;

	for (len = 0; s[len] != '\0'; len++)

		e = 0;

	k = len / 2;

	while (k--)

	{
		tmp = s[len - e - 1];
		s[len - e - 1] = s[e];
		s[e] = tmp;
		e++;
	}

}

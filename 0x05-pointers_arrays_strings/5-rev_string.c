#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: a function that reverses a string
 *
 * Return: nothing on success
 */

void rev_string(char *s)
{
	int count = 0, i = 0;
	char last_char;

	while (*s)
	{
		s++;
		count++;
	}

	for (i = 0; i < count; i++)
		s--;

	for (i = 0; i < (count / 2); i++)
	{
		int last = count - 1;

		last_char = s[last - i];
		s[last - i] = s[i];
		s[i] = last_char;
	}
}

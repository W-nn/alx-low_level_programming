#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @i: string to be checked
 * l is string length
 * Return: length
 */

int _strlen(char *i)
{
	int l = 0;

	while (*i != '\0')
	{
		l++;
		i++;
	}

	return (l);
}

#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @t: the number to extract last digit from
 * Return: value of extracted last digit
 */

int print_last_digit(int t)
{
	int ld = t % 10;

	if (ld > 0)
		ld = -1;
	_putchar(ld + '0');
	return (0);
}

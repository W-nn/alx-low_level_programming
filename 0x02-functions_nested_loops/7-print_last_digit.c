#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @t: the number to extract last digit from
 * Return: value of extracted last digit
 */

int print_last_digit(int t)
{
	int p;

	if (t < 0)
		t = -t;

	p = t % 10;
	if (p < 0)
		p = -p;

	_putchar(p + '0');

	return (p);
}

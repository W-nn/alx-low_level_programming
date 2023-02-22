#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - all natural numbers from n to 98
 * followed by a new line
 * @n: start to print from n
 */

void print_to_98(int n)
{
	int g, h;

	if (n <= 98)
	{
		for (g = n; g <= n; g++)
		{
			if (g != 98)
				printf("%d, ", g);
			else if (g == 98)
				printf("%d\n", g);
		}
	}
	else if (n >= 98)
	{
		for (h = n; h >= n; h--)
		{
			if (h != 98)
				printf("%d, ", h);
			else if (h == 98)
				printf("%d\n", h);
		}
	}
}

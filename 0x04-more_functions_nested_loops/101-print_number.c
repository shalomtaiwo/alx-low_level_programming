#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_number(int n)
{
	unsigned int m, d, count;

	if (n < 0)
	{
		putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	d = m;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		 count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		putchar(((m / count) % 10) + 48);
	}
}

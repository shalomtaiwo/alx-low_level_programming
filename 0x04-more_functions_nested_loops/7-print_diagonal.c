#include "main.h"

/**
 * print_diagonal - prints diagonal line n times.
 * @n: times diagonal line is printed.
 * Return: no return.
 */

void print_diagonal(int n)
{
	int c, d;

	for (c = 0; c < n; c++)
	{
		for (d = 0; d < c; d++)
		{
			putchar(' ');
		}

		putchar(92);
		if (c < (n - 1))
			putchar('\n');
	}
	putchar('\n');
}

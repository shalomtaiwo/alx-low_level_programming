#include "main.h"

/**
 * main - check the code
 * @n: times diagonal line is printed.
 * Return: Always 0.
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

#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_diagonal(0);
	print_diagonal(2);
	print_diagonal(10);
	print_diagonal(-4);
	return (0);
}

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

#include "main.h"

/**
 * main - check the code
 * @n: size of the square.
 * Return: Always 0.
 */

void print_square(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(35);
		}
		if (i != n - 1)
			_putchar('\n');
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_numbers - prints numbers between 0 to 9.
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	int lower;

	for (lower = 0; lower < 10; lower++)
	{
		putchar((lower % 10) + '0');
	}
	putchar('\n');
	return (0);
}

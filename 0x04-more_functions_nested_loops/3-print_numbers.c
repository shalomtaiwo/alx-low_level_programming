#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_numbers();
	return (0);
}

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

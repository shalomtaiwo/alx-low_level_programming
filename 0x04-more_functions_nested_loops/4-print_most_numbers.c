#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	print_most_numbers();
	return (0);
}

void print_most_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		if(c == 2 || c == 4 )
			continue;

		putchar((c % 10) + '0');
	}
	putchar('\n');
	return (0);
}

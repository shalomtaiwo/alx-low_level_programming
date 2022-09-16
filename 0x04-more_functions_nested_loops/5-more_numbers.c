#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	more_numbers();
	return (0);
}

void more_numbers(void)
{
	int c;
	int count;

	count = 0;

	while(count < 10)
	{
		for (c = 0; c < 15; c++)
		{
			if (c >= 10)
				putchar((c / 10) + 48);
			putchar((c % 10) + 48);
		}
		putchar('\n');
		++count;
	}
	return (0);
}

#include "main.h"

/**
 * main - check the code
 * more_numbers - prints numbers between 0 to 14
 * Return: Always 0.
 */

void more_numbers(void)
{
	int c;
	int count;

	count = 0;

	for (count = 0; count < 10; count++)
	{
		for (c = 0; c < 15; c++)
		{
			if (c >= 10)
				putchar((c / 10) + 48);
			putchar((c % 10) + 48);
		}
		putchar('\n');
	}
}

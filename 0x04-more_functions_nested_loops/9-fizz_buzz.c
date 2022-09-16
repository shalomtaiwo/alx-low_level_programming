#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int c;

	for (c = 0; c < 100; c++)
	{
		printf("%d", c);
		if (c % 3 == 0 && c % 15 != 0)
		{
			printf(" Fizz");
		}
		else if (c % 5 == 0 && c % 15 != 0)
		{
			printf(" Buzz");
		}
		else if (c % 15 == 0)
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d", c);
		}
	}
	printf("\n");
	return (0);
}

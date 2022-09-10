#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lower1;
	int lower2;

	for (lower1 = 0; lower1 < 9; lower1++)
	{
		for (lower2 = lower1 + 1; lower2 < 10; lower2++)
		{
			putchar((lower1 % 10) + '0');
			putchar((lower2 % 10) + '0');
			
			if (lower1 == 8 && lower2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}

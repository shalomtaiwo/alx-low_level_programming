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
	int lower3;

	for (lower1 = 0; lower1 < 8; lower1++)
	{
		for (lower2 = lower1 + 1; lower2 < 9; lower2++)
		{
			for (lower3 = lower2 + 1; lower3 < 10; lower3++)
			{
				putchar((lower1 % 10) + '0');
				putchar((lower2 % 10) + '0');
				putchar((lower3 % 10) + '0');

				if (lower1 == 7 && lower2 == 8 && lower3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}

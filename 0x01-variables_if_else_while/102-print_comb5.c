#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lower, num2;

	for (lower = 0; lower <= 98; lower++)
	{
		for (num2 = lower + 1; num2 <= 99; num2++)
		{
			putchar((lower / 10) + '0');
			putchar((lower % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');
		
			if (lower != 99 && num2 != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lower;

	for (lower = 0; lower < 100; lower++)
	{
		putchar((lower / 10) + '0');
		putchar((lower % 10) + '0');
		if (lower != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

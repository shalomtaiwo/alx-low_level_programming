#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lower;

	for (lower = 0; lower < 90; lower++)
	{
		putchar(lower / 10 + '0');
		putchar((lower % 10) + '1');
		if (lower != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lower;

	for (lower = 0; lower < 10; lower++)
	{
		putchar(lower % 10 + '0');
	}
	putchar('\n');
	return (0);
}

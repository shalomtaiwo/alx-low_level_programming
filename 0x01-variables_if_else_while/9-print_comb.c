#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower;

	for (lower = '0'; lower <= '9'; lower++)
	{
		if (lower != '9')
		{
			putchar(lower);
			putchar(',');
		}
		else
		{
			putchar(lower);
		}
	}
	putchar('\n');
	return (0);
}

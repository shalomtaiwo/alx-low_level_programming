#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lower;

	for (lower = 97; lower <= 122; ++lower)
	{
		printf("%c", lower);
	}
	printf("\n");
	return (0);
}

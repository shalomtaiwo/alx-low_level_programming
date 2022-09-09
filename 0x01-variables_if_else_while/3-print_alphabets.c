#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int c = 97; c <= 122; ++c)
	{
		printf("%c ", c);
	}
	for (int c = 65; c <= 90; ++c)
	{
		printf("%c ", c);
	}
	printf("\n");
	return (0);
}

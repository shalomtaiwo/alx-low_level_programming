#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower;

	for (lower = '0' ; lower <= 'F' ; lower++)
	{
		if ((lower != ':') && (lower != ';') && (lower != '<') && (lower != '=') && (lower != '>') && (lower != '?') && (lower != '@'))
		{
			putchar(lower);
		}
	}
	putchar('\n');
	return (0);
}

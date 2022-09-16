#include "main.h"
/**
 * main - check the code
 * @size: numbers of lines.
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - i); j++)
			putchar(' ');
		for (j--; j < size; j++)
			putchar(35);
		if (i < (size - 1))
			putchar('\n');
	}
	putchar('\n');
}

#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_line(0);
	print_line(2);
	print_line(10);
	print_line(-4);
	return (0);
}

void print_line(int n)
{
	int d;

	for (d = 0; d < n; d++){
	{
		putchar(95);
	}
	putchar('\n');
}

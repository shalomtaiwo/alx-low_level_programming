#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	float floatType;
	long int longintType;
	long long int longlongintType;
	char charType;

	/* sizeof evaluates the size of a variable */
	printf("Size of char: %zu byte\n", sizeof(charType));
	printf("Size of int: %zu byte\n", sizeof(intType));
	printf("Size of long int: %zu byte\n", sizeof(longintType));
	printf("Size of long long int: %zu byte\n", sizeof(longlongintType));
	printf("Size of float: %zu byte\n", sizeof(floatType));
	return (0);
}

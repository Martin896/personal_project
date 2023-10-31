#include <stdio.h>

/**
 * main - start of the program
 * Return: 0 for success
 * sum - add two numbers
 **/

int sum(int, int);

int main(void)
{
	int a, b, r;

	printf("Enter two numbers to sum them:\n");
	scanf("%d%d", &a, &b);
	r = sum(a, b);
	printf("Sum: %d\n", r);
	return (0);
}

int sum(int a, int b)
{
	int r;

	r = a + b;

	return (r);
}

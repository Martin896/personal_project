#include <stdio.h>

/**
 * main - start of program
 * sum - add two numbers
 * subtract - subtracting two numbers
 * multiply - multiply two numbers
 * divide - divide two numbers
 * Return: 0 for success
 **/
int sum(void);
int subtract(void);
int multiply(void);
int divide(void);

int a, b;
int result = 0;

int main(void)
{
	int add, sub, mult, div;

	printf("Enter two numbers to know their sum,");
	printf(" difference, product, and quotient\n");
	scanf("%d %d", &a, &b);
	add = sum();
	sub = subtract();
	mult = multiply();
	div = divide();

	printf("Sum = %d\n", add);
	printf("Differnce = %d\n", sub);
	printf("product = %d\n", mult);
	printf("Quotient = %d\n ", div);
	printf("No further action required\n");
	return (0);
}

int sum(void)
{
	result = a + b;
	printf("\n");
	return (result);
}

int subtract(void)
{
	result = a - b;
	printf("\n");
	return (result);
}
int multiply(void)
{
	result = a * b;
	printf("\n");
	return (result);
}
int divide(void)
{
	result = a / b;
	printf("\n");
	return (result);
}

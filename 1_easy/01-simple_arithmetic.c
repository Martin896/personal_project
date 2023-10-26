#include <stdio.h>

/**
 * main - start of the program
 * Return: 0 for success
 * subtract - function to subtract two numbers
 * sum - function to add two numbers
 * divide - function to divide two numbers
 * multiply - function to multiply two numbers
 **/
void sum(void);
void subtract(void);
void divide(void);
void multiply(void);

int main(void)
{
	sum();
	subtract();
	multiply();
	divide();
	printf("No further action required\n");
	return (0);
}

void sum(void)
{
	float a, b;
	float result;

	printf("Enter two numbers:\n");
	scanf("%f %f", &a, &b);
	printf("\n");
	result = a + b;

	printf("Sum = %f \n", result);
}

void subtract(void)
{
	float a, b;
	float result;

	printf("Enter two number to know their difference:\n");
	scanf("%f %f", &a, &b);
	printf("\n");
	result = a - b;
	printf("Difference = %f \n", result);

}

void multiply(void)
{
	float a, b;
	float result;

	printf("Enter two numbers to multiply them:\n");
	scanf("%f %f", &a, &b);
	printf("\n");
	result = a * b;

	printf("Result = %f \n", result);
}

void divide(void)
{
	float a, b;
	float result;

	printf("Enter two number to divide the first by the second:\n");
	scanf("%f %f", &a, &b);
	printf("\n");
	result = a / b;
	printf("Division Result = %f \n", result);
}

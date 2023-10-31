#include <stdio.h>

/**
 * main - start of the program
 * Return: 0 for success
 * max: function that give max value
 **/

int max(int, int);

int main(void)
{
	int a, b, maximum;

	printf("Enter two numbers to find the maximum:\n");
	scanf("%d%d", &a, &b);
	maximum = max(a, b);
	printf("The biggest of the two number is %d\n:", maximum);
	return (0);
}

int max(int a, int b)
{


	if (a > b)
	{	return a;
	}
	else
	{
		return b;
	}
}

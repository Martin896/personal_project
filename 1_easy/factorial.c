#include <stdio.h>

int factorial(int n)
{	
	int m;

	if (n == 1 || n == 0)
		return (1);
	else
	{
		m = n * factorial(n-1);
		return (m);
	}

}
int main(void)
{
	int num;

	printf("Enter a nummber\n");
	scanf("%d", &num);
	if (num < 0)
		printf("number must be greater than 0\n");
	else
		printf("The factorial of %d is %d: \n", num, factorial(num));
	return (0);

}

#include <stdio.h>

int sum(int n)
{
	int result =  0;

	if (n == 1)
		return (1);
	result = n + sum(n-1);
	return(result);
}
int main(void)
{
	int num;
	
	printf("Enter a number\n");
	scanf("%d", &num);
	if (num < 0)
		printf("Numbers less than 1 are not allowed\n");
	else
		printf("The sum of numbers between 1 and %d is %d \n", num, sum(num));
	return (0);
}

#include <stdio.h>

int sum(int n)
{
	int result =  0;

	if (n == 1)
		return (1);
	result = n + sum(n-1);
	return(0);
}
int main(void)
{
	int num;
	
	printf("Enter a number\n");
	scanf("%d", &num);
	if (num < 0)
		printf("Numbers less than 1 are not allowed\n");
	else
		sum(num);
	return (0);
}

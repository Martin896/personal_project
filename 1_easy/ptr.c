#include <stdio.h>
/**
 * main - start of the program
 * Return: always 0
 **/

int main(void)
{
	int a = 10;
	int *ptr = &a;

	printf("How pointers work:\n");
	printf("A pointer is a variable that store the address of another variable");
	printf("This prints the adress of variable a=%p\n", (void *)ptr);
	printf("The format specifier for a pointer is %%p");
	printf(" the argument it takes is (void *)ptr\n");


	printf("A pointer can be use to access that value store in the variable ");
	printf("it points to, by passing the argument *ptr\n");
	printf("we can use various valid format specifier to print the value\n");
	printf("This print the value store in the variable a in int and hex\n");
	printf("%d\n%X\n", *ptr, *ptr);
	return (0);
}

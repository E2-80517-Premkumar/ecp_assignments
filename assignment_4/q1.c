#include<stdio.h>

int factorial(int);

int main(void)
{
	int num1, fact1;
	printf("Enter a number : ");
	scanf("%d", &num1);

	fact1 = factorial(num1);
	printf("Factorial of %d = %d\n", num1, fact1);

	return 0;
}

int factorial(int num)
{
	int fact=1;
	for(int i=1; i<=num; i++)
	{
		fact = fact * i;
	}
	return fact;
}


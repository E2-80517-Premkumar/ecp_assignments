#include<stdio.h>

int factorial(int);

int main(void)
{
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);

	printf("Factorial of %d! = %d\n", num, factorial(num));

	return 0;
}

int factorial(int num)
{
	if(num == 1)
		return 1;
	return num * factorial(num - 1);
}


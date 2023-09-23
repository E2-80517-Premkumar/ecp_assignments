/*
#include<stdio.h>

int calculate(int, int, int *);

int op1=12, op2=12;

int main(void)
{
	int sum, product;
	printf("Using global variables : \n");
	sum = calculate(op1, op2, &product);
	printf("Sum = %d, Product = %d\n", sum, product);

	return 0;
}
int calculate(int num1, int num2, int *prod)
{
	*prod = num1 * num2;
	return num1 + num2;
}

*/
#include<stdio.h>

int calculate(int, int, int *);

int main(void)
{
	int op1, op2, sum, product;
	printf("without global variables : \n");
	printf("Enter the two numbers : \n");
	scanf("%d %d", &op1, &op2);

	sum = calculate(op1, op2, &product);
	printf("Sum = %d, Product = %d\n", sum, product);

	return 0;
}
int calculate(int num1, int num2, int *prod)
{
	*prod = num1 * num2;
	return num1 + num2;
}


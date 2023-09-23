#include<stdio.h>

int display_gcd(int, int);

int main(void)
{
	int num1, num2;
	printf("Enter the two numbers : ");
	scanf("%d %d", &num1, &num2);

	printf("GCD of %d and %d = %d\n", num1, num2, display_gcd(num1, num2));

	return 0;
}

int display_gcd(int num1, int num2)
{
	if(num2 == 0)
		return num1;
	return display_gcd(num2, num1 % num2);
}


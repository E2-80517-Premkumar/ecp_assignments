#include<stdio.h>

int fibonacci(int);

int main(void)
{
	int num, n=0, i;

	printf("Enter a numbers : ");
	scanf("%d", &num);
	printf("Fibonacci series : ");
	for(i=1; i<=num; i++)
	{
		printf("%-2d", fibonacci(n));
		n++;
	}
	printf("\n");
	return 0;
}

int fibonacci(int n)
{
	if(n == 0)
		return 0;
	else if(n == 1)
		return 1;
	else
		return (fibonacci(n-1)+fibonacci(n-2));
}


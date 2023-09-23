#include<stdio.h>

void pascal_triangle(int);

int main(void)
{
	int num;
	printf("Enter number of rows : ");
	scanf("%d", &num);

	pascal_triangle(num);

	return 0;
}

void pascal_triangle(int num1)
{
	for(int i=1; i<=num1; i++)
	{
		for(int j=1; j<=num1-i; j++)
		{
			printf("  ");
		}
		int k, coeff = 1;
		for(int k=1; k<=i; k++)
		{
			printf("%4d", coeff);
			coeff = coeff * (i-k)/k;
		}
		printf("\n");
	}
}


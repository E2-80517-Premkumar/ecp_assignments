#include<stdio.h>

void prime_no(int);
void display_data(int, int);

int main(void)
{
	int num, num1, num2;
	printf("Enter a number : ");
	scanf("%d", &num);

	prime_no(num);

	printf("Enter first number : ");
	scanf("%d", &num1);

	printf("Enter second number : ");
	scanf("%d", &num2);

	display_data(num1, num2);

	return 0;
}

void prime_no(int num3)
{
	int i=2, count=0;
	while(i<=num3)
	{
		if(num3 % i == 0)
			count++;

		if(count > 1)
			break;
		i++;	
	}
	if(count == 1)
		printf("The entered number is a prime number\n");
	else
		printf("The entered number is not a prime number\n");

}

void display_data(int n1,int n2)
{
	int i, j;
	for(i=n1; i<=n2; i++)
	{
		for(j=2; j<=i; j++)
		{
			if(i%j == 0)
			 	break;
		}
		if(i == j)
			printf("%d ", j);
	}
	printf("\n");
}






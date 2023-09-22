#include<stdio.h>

int main(void)
{
	int num, count=0;
	printf("Enter a number : ");
	scanf("%d", &num);

	for(int i=2; i<=num; i++)
	{
		if(num % i == 0)
			count++;
	}		
	if(count == 1)
		printf("%d is a prime number\n", num);
	else
		printf("%d is not a prime number\n", num);

	return 0;
}


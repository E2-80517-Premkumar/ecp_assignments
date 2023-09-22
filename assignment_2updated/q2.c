#include<stdio.h>

int main(void)
{
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	
	if(num % 2 == 0)
		printf("The entered number is even number\n");
	else
		printf("The entered number is odd number\n");

	return 0;
}

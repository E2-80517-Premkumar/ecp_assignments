#include<stdio.h>

int main(void)
{
	int num, rem, rev=0, sum=0, arm=0;
	int original;
	printf("Input : ");
	scanf("%d", &num);
	original = num;

	while(num > 0)
	{
		rem = num % 10;
		rev = (rev * 10) + rem;
		num = num / 10;
		sum = sum + rem;
		arm = arm + (rem * rem * rem);
	}

	printf("1)sum of digits of integers : \n");
	printf("Input : %d\n", original);
 	printf("Output : %d\n", sum);
	
	printf("2)Reversed Numbers : \n");
	printf("Input : %d\n", original);
	printf("Output : %d\n", rev);
	
	printf("3)Check number palindrome or no : \n");
	if(original == rev)
	{
		printf("Input : %d\n", original);
		printf("Output : %d is a numeric palindrome\n", original);
	}	
	else
	{
		printf("Input : %d\n", original);
		printf("Output : %d is not a numeric palindrome\n", original);
	}

	printf("4)armstrong number or not : \n");
	if(original == arm)
	{
		printf("Input : %d\n", original);
		printf("Output : %d is an Armstrong number\n", original);
	}
	else
	{
		printf("Input : %d\n", original);
		printf("Output : %d is not an Armstrong number\n", original);
	}
	return 0;
}


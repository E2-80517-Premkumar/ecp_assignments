#include<stdio.h>

int main(void)
{
	int num1, num2, max;
	printf("Enter the two numbers : ");
	scanf("%d %d", &num1, &num2);
	
	printf("Using If - else\n");
	if(num1 == num2)
		printf("Both number are equal\n");
	else if(num1 > num2)
		printf("Maximum number is : %d\n", num1);
	else
		printf("Maximum number is : %d\n", num2);

	printf("Using Conditional Operator\n");
	max = (num1 > num2) ? num1 : ((num2 > num1) ? num2 : -1);
	if(max != -1)
		printf("Maximum number is : %d\n", max);
	else
		printf("Both number are equal\n");

	return 0;
}

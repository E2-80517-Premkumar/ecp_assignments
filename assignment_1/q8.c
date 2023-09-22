#include<stdio.h>
int main()
{
	int num1,num2,num3,avg;
	printf("Enter the number1:");
	scanf("%d",&num1);
	printf("Enter the number2:");
	scanf("%d",&num2);
	printf("Enter the number3:");
	scanf("%d",&num3);
	avg=(num1+num2+num3)/3;
	printf("Average marks:%d",avg);
	return 0;
}


#include<stdio.h>
int main()
{
	int a;
	unsigned int b;
	long int sum,diff,prod;
	printf("Enter the number1:");
	scanf("%d",&a);
	printf("Enter the number2:");
	scanf("%u",&b);
	sum=a+b;
	printf("sum=%ld\n",sum);
	diff=a-b;
	printf("diff=%ld\n",diff);
	prod=a*b;
	printf("prod=%ld\n",prod);
	return 0;
}

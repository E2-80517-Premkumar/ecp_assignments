
#include<stdio.h>

int main(void)
{
	int num, num1, num2, num3, num4;
	printf("Enter a four digit number : ");
	scanf("%d", &num);
	int n = num;

	printf("\nFace value : \n");
	num1 = num / 1000;  num = num % 1000;
	num2 = num / 100;  num = num % 100;
	num3 = num / 10;  num = num % 10;
	num4 = num;
	printf("\n%d\t%d\t%d\t%d\n", num1, num2, num3, num4);

	printf("\nPlace value : \n");
        num1 = num1 * 1000; 
	num2 = num2 * 100;
	num3 = num3 * 10; 
	num4 = num;
	printf("\n%d = %d + %d + %d + %d\n", n, num1, num2, num3, num4);
	
	printf("\nReverse Number : \n");
	int rev=0, rem;
	while(n!=0)
	{
		rem = n % 10;
		rev = (rev * 10) + rem;
		n = n / 10;
	}
	printf("\n%d\n", rev);
	return 0;
}

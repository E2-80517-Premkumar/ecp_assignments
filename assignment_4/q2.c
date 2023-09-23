#include<stdio.h>

int power(int, int);

int main(void)
{
	int pow, num1, num2;
	printf("Enter base and index : ");
	scanf("%d %d", &num1, &num2);

	pow = power(num1, num2);
	printf("Power of %d to %d : %d\n", num1, num2, pow);

	return 0;
}

int power(int base, int index)
{
	int p=1;
	for(int i=0; i<index; i++)
	{
		p = p * base;
	}
	return p;
}


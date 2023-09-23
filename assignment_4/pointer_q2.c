#include<stdio.h>

void swap(int *, int *);

int main(void)
{
	int num1, num2;
	printf("Enter the two numbers : ");
	scanf("%d %d", &num1, &num2);

	printf("Before Swapping : %d %d\n", num1, num2);
	swap(&num1, &num2);
	printf("After Swapping : %d %d\n", num1, num2);

	return 0;
}
void swap(int *n1, int *n2)
{
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}


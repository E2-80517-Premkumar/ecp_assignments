#include<stdio.h>

void fibonacci(int);

int main(void)
{
	int num3;
	printf("Enter a number : ");
	scanf("%d", &num3);

	fibonacci(num3);

	return 0;
}
void fibonacci(int n3)
{
	int n1 = 0, n2 = 1, n4;
	printf("%d %d", n1, n2);
	for(int i=2; i<n3; i++)
	{
		n4 = n1 + n2;
		printf(" %d", n4);
		n1 = n2;
		n2 = n4;
	}
	printf("\n");
}


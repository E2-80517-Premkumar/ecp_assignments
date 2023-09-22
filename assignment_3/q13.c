#include<stdio.h>

int main(void)
{
	int n1=0, n2=1, n3, n4;
	printf("Enter a number : ");
	scanf("%d", &n3);
	printf("Fibonacci Series : %d", n2);
	for(int i=2; i<=n3; i++)
	{
		int n4 = n1 + n2;
		printf(" %d", n4);
		n1 = n2;
		n2 = n4;
	}
	printf("\n");

	return 0;
}


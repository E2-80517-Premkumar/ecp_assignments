#include<stdio.h>

int main(void)
{
	int i, j, num;
	printf("Enter a number : ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		for(j=1; j<=num-i; j++)
		{
			printf("  ");

		}
	
		int k, coeff=1;
		for(k=1; k<=i; k++)
		{
			printf("%4d", coeff);
			coeff = coeff * (i-k)/k;
		}
		printf("\n");
	}

	return 0;
}


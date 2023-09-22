#include<stdio.h>

int main(void)
{
	int i, j;
	printf("Prime numbers between 1 to 100 : \n");
	for(i=1; i<=100; i++)
	{
		for(j=2; j<=i; j++)
		{ 
			if(i % j == 0)
				break;
		}
		if(i == j)
			printf("%-4d", i);
	}
	printf("\n");

	return 0;
}


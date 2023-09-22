#include<stdio.h>

int main(void)
{
	int num1, num2;
	printf("Enter a range : ");
	scanf("%d %d", &num1, &num2);

	printf("Table from %d to %d : \n", num1, num2);
	for(int i=num1; i<=num2; i++)
	{
		for(int j=1; j<=10; j++)
		{
			printf("%-4d\n", i*j);
		}
		printf("\n\n");
	}	
	return 0;
}


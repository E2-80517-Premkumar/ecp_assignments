#include<stdio.h>
int main()
{
	/*
	printf("*\n");
	printf("**\n");
	printf("***\n");
	printf("****\n");
	return 0;
	*/

	int rows,i,j;
	printf("Enter the rows:");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

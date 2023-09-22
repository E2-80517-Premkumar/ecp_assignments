#include<stdio.h>

int main(void)
{
	int num, tab;
	printf("Enter a number : ");
	scanf("%d", &num);
	
	printf("Table of %d : \n", num);
	for(int i=1; i<=10; i++)
	{
		tab = num * i;
		printf("%d\n", tab);
	}

	return 0;
}


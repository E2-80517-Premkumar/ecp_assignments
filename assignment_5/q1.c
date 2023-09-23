#include<stdio.h>

int main(void)
{
	int sub[20], total=0, avg;
	printf("\nEnter marks of five subjects : \n");
	for(int i=1; i<=5; i++)
	{
		scanf("%d", &sub[i]);
	}
	for(int i=1; i<=5; i++)
	{
		total += sub[i];
	}
	avg = total/5;

	printf("Total marks = %d\n", total);

	printf("Average of marks = %d\n", avg);

	return 0;
}


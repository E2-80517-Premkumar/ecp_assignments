#include<stdio.h>

int main(void)
{
	int i=1, num;
	printf("Input : \n");
	scanf("%d",&num);	
	printf("Output : \n");
	
	while(i <= 10)
	{
		printf("%d x %d = %d\n", num, i, num*i);
		i++;
	}

	return 0;
}


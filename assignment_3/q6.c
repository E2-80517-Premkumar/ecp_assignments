#include<stdio.h>

int main(void)
{
	int num;
	int i=1;
	printf("Enter a number : ");
	scanf("%d", &num);

	printf("Output : all factors : ");
	while(i < num)
	{
		if(num%i == 0)
			printf(" %d ", i);
		else
			printf("");
		i++;
	}
	printf("\n");

	return 0;
}


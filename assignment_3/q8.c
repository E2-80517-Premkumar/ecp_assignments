#include<stdio.h>

int main(void)
{
	int num, i=2;
	printf("Enter a number : ");
	scanf("%d", &num);
	
	printf("Output: %d = ", num);
	while(i <= num)
	{
		if(num % i == 0)
		{
			printf(" %d ", i);
			num = num / i;
			if(i < num)
				printf(" * ");
		}
		else
			i++;
	}
	printf("\n");

	return 0;
}



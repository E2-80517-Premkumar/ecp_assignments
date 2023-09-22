#include<stdio.h>

int main(void)
{
	int fact = 1;
	int num, i;
	printf("Enter a number : ");
	scanf("%d", &num);

	i = num;
	while(i >= 1)
	{
		fact = fact * i;
		printf("%d", i);

		if(i > 1)
			printf("*");
		i--;	
	}
	printf(" =%d\n", fact);

	return 0;
}


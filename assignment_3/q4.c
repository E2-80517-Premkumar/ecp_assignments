#include<stdio.h>

int main(void)
{
	int fact = 1;
	int num, i = 1;
	printf("Enter a number : ");
	scanf("%d", &num);

	while(i <= num)
	{
		fact = fact * i;
		printf("%d", i);
		if(i < num)
			printf("*");
		i++;	
	}
	printf(" =%d\n", fact);

	return 0;
}


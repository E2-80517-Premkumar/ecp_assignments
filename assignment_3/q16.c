#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num, attempt=0, magic_num;
	do
	{
		printf("Enter any number between 1 to 1000 : ");
		scanf("%d", &num);
		attempt++;
		
		magic_num = rand() % 1000 + 1;

		if(magic_num == num)
			printf("Congrats! You won\n");
		else if(magic_num > num)
			printf("** left **\n");
		else
			printf("** right **\n");

	}while(attempt != 10);	

	return 0;
}


#include<stdio.h>

int main(void)
{
	int num;
	char ch;
	int i = 1;
	printf("Character : ");
	scanf("%c", &ch);

	printf("Number : ");
	scanf("%d", &num);

	printf("Output : \n");
	while(i <= num)
	{
		printf("%c", ch);
		i++;
	}
	printf("\n");

	return 0;
}


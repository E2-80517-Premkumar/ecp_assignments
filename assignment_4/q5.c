#include<stdio.h>

void display_data(int, char);

int main(void)
{
	char ch;
	int num;
	printf("Enter a character : ");
	scanf("%c", &ch);

	printf("Enter a number : ");
	scanf("%d", &num);

	display_data(num, ch);

	return 0;
}
void display_data(int num1, char ch1)
{
	for(int i=1; i<=num1; i++)
		printf(" %c ", ch1);
	printf("\n");
}


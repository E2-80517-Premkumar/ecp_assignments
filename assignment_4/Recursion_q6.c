#include<stdio.h>

void dectohexa(int);

int main(void)
{
	int num=0;
	printf("Enter a number : ");
	scanf("%d", &num);

	printf("Conversion of hexadecimal : ");
	
	dectohexa(num);
	
	printf("\n");
	return 0;
}

void dectohexa(int num)
{
	int hex=0;

	if(!num)
		return;
	else
	{
		hex = num % 16;
		dectohexa(num/16);
	}
	if(hex>9)
		printf("%c", 'A' + (hex - 10));
	else
		printf("%d", hex); 
}


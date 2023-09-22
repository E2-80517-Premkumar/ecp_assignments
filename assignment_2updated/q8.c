#include<stdio.h>

int main(void)
{
	int quant;
	float price;
	printf("Enter the quantity : ");
	scanf("%d", &quant);
	
	if(quant < 30)
	{
		price = quant * 5;
		printf("Price : %.2f\n", price);
	}

	else if(quant > 30 && quant <= 50)
	{
		price = (quant*5)-((quant*5)*0.1);
		printf("Price : %.2f\n", price);
	}

	else
	{
		price = (quant*5)-((quant*5)*0.15);
		printf("Price : %.2f\n", price);
	}

	return 0;
}


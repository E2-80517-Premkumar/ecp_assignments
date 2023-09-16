#include<stdio.h>
int main()
{
	float cel,far;
	printf("Enter the temperature in fahrenheit:");
	scanf("%f",&far);
	cel=(far-32)*5/9.0;
	printf("Degree celsius:%f\n",cel);
	printf("Enter the temperature in celsius:");
	scanf("%f",&cel);
	far=(cel*9/5.0)+32;
	printf("Degree farhenheit:%f",far);
	return 0;
}

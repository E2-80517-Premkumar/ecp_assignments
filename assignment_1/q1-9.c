#include<stdio.h>
int main()
{
	float c,f;
	char o;
	printf("Enter c to convert farenheit to celcius \n Enter f to convert celcius to farenheit : ");
	scanf("%c",&o);
	switch(o)
		{
			case 'c':
				printf("Enter Farenheit: ");
				scanf("%f",&f);
				c=5/9.0*(f-32);
				printf("\n%f farenheit in celcius is %f\n",f,c);
				break;
			case 'f':
				printf("Enter celcius: ");
				scanf("%f",&c);
				f=(c*9/5.0)+32;
				printf("\n%f celcius in farenheit is %f\n",c,f);
				break;
			default:
				printf("Wrong entry!!");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	float c,f;
	char ch;
	printf("\nEnter c to convert farenheit to celcius \nEnter f to convert celcius to farenheit : \n");
	scanf("%c",&ch);
	switch(ch)
		{
			case 'c':
				printf("Enter Value in Farenheit: ");
				scanf("%f",&f);
				c=5/9.0*(f-32);
				printf("\n%f farenheit in celcius is %f\n",f,c);
				break;
			case 'f':
				printf("Enter Value in celcius: ");
				scanf("%f",&c);
				f=(c*9/5.0)+32;
				printf("\n%f celcius in farenheit is %f\n",c,f);
				break;
			default:
				printf("Wrong choice\n");
	    }
	return 0;
}

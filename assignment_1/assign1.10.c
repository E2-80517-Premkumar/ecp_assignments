#include<math.h>
#include<stdio.h>
int main()
{
	float s,a,b,c,Perimeter,Area;
	printf("Enter the a:");
	scanf("%f",&a);
	printf("Enter the b:");
	scanf("%f",&b);
	printf("Enter the c:");
	scanf("%f",&c);
	Perimeter=a+b+c;
	s=(a+b+c)/2;
	Area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Perimeter=%.2f\n",Perimeter);
	printf("Area=%.2f",Area);
	return 0;
}


#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,area,peri,s;
	printf("Enter the length of three sides: ");
	scanf("%f%f%f",&a,&b,&c);
	peri=a+b+c;
	s=peri/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area :%f\nPerimeter: %f\n",area,peri);
	return 0;
}

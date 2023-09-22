#include<stdio.h>
#include<math.h>

int main(void)
{
	int a, b, c, s;
	int perimeter, area;
	printf("Enter the Value for sides : \n");
	scanf("%d %d %d", &a, &b, &c);

	perimeter = a + b + c;

	s = perimeter/2;

	area = sqrt(s*(s-a)*(s-b)*(s-c));

	printf("Perimeter : %d\n", perimeter);
	printf("Area : %d\n", area);
	return 0;
}



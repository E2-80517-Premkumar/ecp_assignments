#include<stdio.h>

int main(void)
{
	int x, y;
	printf("Enter the two points : ");
	scanf("%d %d", &x, &y);

	if(x == 0 && y == 0)
		printf("The co-ordinates at origin\n");
	else if(x > 0 && y > 0)
		printf("The co-ordinates at first quadrant\n");
	else if(x < 0 && y < 0)
		printf("The co-ordinates at third quadrant\n");
	else if(x > 0 && y < 0)
		printf("The co-ordinates at fourth quadrant\n");
	else if(x < 0 && y > 0)
		printf("The co-ordinates at second quadrant\n");
	else if(x == 0 && y > 0)
		printf("The co-ordinates at +ve y-axis\n");
	else if(x == 0 && y < 0)
		printf("The co-ordinates at -ve y-axis\n");
	else if(x > 0 && y == 0)
		printf("The co-ordinates at +ve x-axis\n");
	else if(x < 0 && y == 0)
		printf("The co-ordinates at -ve x-axis\n");
	else
		goto L1;
L1:
	return 0;
}



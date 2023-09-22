#include<stdio.h>

int main(void)
{
	int base, index, power = 1;
	printf("Input:  base : ");
	scanf("%d", &base);
	printf("index : ");
	scanf("%d", &index);

	for(int i=0; i < index; i++)
	{
		power = power * base;
	}
	printf("Output: %d\n", power);

	return 0;
}


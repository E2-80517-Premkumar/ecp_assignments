#include<stdio.h>

int display_power(int, int);

int main(void)
{
	int base, index;
	printf("Enter base and index : ");
	scanf("%d %d", &base, &index);

	printf("Power of %d^%d = %d\n", base, index, display_power(base, index));

	return 0;
}

int display_power(int base, int index)
{
	if(index == 1)
		return base;
	return (base * display_power(base, index - 1));
}


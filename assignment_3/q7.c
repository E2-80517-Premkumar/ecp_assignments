#include<stdio.h>

int main(void)
{
	int num, original;
	int i=1;
	printf("Enter a number : ");
	scanf("%d", &num);

	while(i <= num/2)
	{
		if(num % i == 0)
		{
			original = num / i;
			if(i <= original)
				printf("%d * %d = %d\n", i, original, num);
		}
		i++;
	}
	return 0;
}


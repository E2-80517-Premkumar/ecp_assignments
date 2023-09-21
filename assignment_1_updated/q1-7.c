#include <stdio.h>
int main()
{
	int a, num, i = 0;
	printf("Enter a 4 digit number: ");
	scanf("%d", &num);
	while (i < 4)
	{
		num = a % 10;
		printf("%d", num);
		i++;
	}
	return 0;
}

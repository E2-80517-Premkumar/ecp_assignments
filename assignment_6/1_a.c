#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[20];
	
	printf("Enter a string1 : ");
	scanf("%s", str1);

	printf("String Length : %d\n", strlen(str1));

	return 0;
}


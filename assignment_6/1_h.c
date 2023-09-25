#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[20];
	char substring[20];
	
	printf("Enter a string1 : ");
	scanf("%s", str1);
	printf("str1 : %s\n", str1);
	
	printf("Enter a substring : ");
	scanf("%s", substring);

	char *ptr1 = strstr(str1, substring);

	printf("ptr1 = %s\n",ptr1);

	return 0;
}


#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[20];
	char ch = 'o';
	
	printf("Enter a string1 : ");
	scanf("%s", str1);

	printf("str1 : %s\n", str1);

	char *ptr = strchr(str1, ch);

	printf("ptr = %s\n", ptr);

	return 0;
}


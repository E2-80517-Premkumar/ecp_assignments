#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[20];
	char str2[20];

	printf("Enter a string1 : ");
	scanf("%s", str1);
	printf("Enter a string2 : ");
	scanf("%s", str2);

	printf("Before string concate : ");
	printf("str1 : %s str2 : %s\n", str1, str2);

	strcat(str2, str1);

	printf("After string concate : ");
	printf("str1 : %s str2 : %s\n", str1, str2);

	return 0;
}


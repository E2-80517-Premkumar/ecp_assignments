#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[20];
	char str2[20];
	printf("Enter a string1 : ");
	scanf("%[^\n]s", str1);

	strncpy(str2, str1, 10);

	printf("After : str1 : %s str2 : %s\n", str1, str2);

	return 0;
}


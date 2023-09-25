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

	printf("Before string comparison : \n");
	printf("str1 : %s str2 : %s\n", str1, str2);

	int res = strcmp(str2, str1);

	printf("After string comparison : \n");
	printf("res = %d\n", res);
	if(res == 0)
		printf("str1 and str2 both are equal\n");
	else if(res < 0)
		printf("str1 is less than str2\n");
	else
		printf("str1 is greater than str2\n");

	return 0;
}



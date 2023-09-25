#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[64] = "sunbeam";
	char str2[64] = "hinjawadi";

	printf("Before : str1 : %s str2 : %s\n", str1, str2);

	strncat(str2, str1, 5);

	printf("After : str1 : %s str2 : %s\n", str1, str2);

	return 0;
}


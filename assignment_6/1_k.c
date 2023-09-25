#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[20] = "sunbeam";
	char str2[20] = "sun";

	int ret = strncmp(str2, str1, 5);
	printf("ret = %d\n", ret);
	if(ret == 0)
		printf("str1 and str2 both are equal\n");
	else if(ret < 0)
		printf("str1 is less than str2\n");
	else
		printf("str1 is greater than str2\n");

	return 0;
}


#include<stdio.h>

int strcmp(const char *str1, const char *str2);

int main(void)
{
	char str1[30] = "Sunbeam";
	char str2[30] = "Hinjawadi";


	int ret = strcmp(str1, str2);
	printf("ret = %d\n", ret);
	if(ret == 0)
		printf("str1 and str2 both are equal\n");
	else if(ret < 0)
		printf("str1 is less than str2\n");
	else
		printf("str1 is greater than str2\n");

	return 0;
}

int strcmp(const char *str1, const char *str2)
{
	for( ; *str1 != '\0'; str1++, str2++)
	{
		if(*str1 != *str2)
			return (*str1 - *str2);
	}
	return (*str1 - *str2);
}


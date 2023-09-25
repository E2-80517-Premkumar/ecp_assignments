#include<stdio.h>
#include<string.h>

char *revstr(char *str1);

int main(void)
{
	char str[30];
	printf("Enter a string : ");
	scanf("%s", str);
	
	revstr(str);
	printf("Reversed string : %s\n", str);

	return 0;
}

char *revstr(char *str)
{
	int i, len;
	char *begin, *end, temp;

	len = strlen(str);
	begin = str;
	end = str+len-1;

	for(i=0; i<(len-1)/2; i++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;
		begin++;
		end--;
	}
}



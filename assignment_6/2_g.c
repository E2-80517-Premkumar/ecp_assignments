#include<stdio.h>
#include<string.h>

int main(void)
{	
	char str[30] = "I love my work";
	char ch = 'o';
	printf("Before : %s", str); 
	
	printf("After : %s\n", strchr(str, ch));

	return 0;
}

char *strchr(const char *str, int ch)
{
	int i;
	for(int i=0; str[i] != '\0'; i++)
	{
		if(str[i] == ch)
			return &str[i];
	}
	if(ch != '\0')
		return &str[i];
	return NULL;
}


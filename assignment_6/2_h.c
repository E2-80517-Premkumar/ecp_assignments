#include<stdio.h>
#include<string.h>

char *strstr(const char *str, const char *substr);

int main(void)
{
	char str[30] = "I love my work";
	char substr[20] = "love";

	printf("After : %s\n", strstr(str, substr));

	return 0;
}
char *strstr(const char *str, const char *substr)
{
	size_t len = strlen(substr);

	for(int i=0; str[i] != '\0'; i++)
	{
		if(str[i] == substr[0])
		{
			if(!strncmp(str+i, substr, len))
				return str+i;
		}		
	}
	return NULL;
}


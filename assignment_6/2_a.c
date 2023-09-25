#include<stdio.h>

size_t strlen(const char *s);

int main(void)
{
	char s[64];
	printf("Enter a string : ");
	scanf("%[^\n]s", s);

	int len = strlen(&s);
	printf("Length of string : %d\n", len);

	return 0;
}

size_t strlen(const char *s)
{
	size_t length = 0;
	while(*s != '\0')
	{
		length++;
		s++;
	}
	return length;
}


#include<stdio.h>

char *strcat(char *dest, const char *src);

int main(void)
{
	char src[30] = "Sunbeam";
	char dest[30] = "Hinjawadi";

	strcat(dest, src);
	printf("After Concatenating : %s\n", dest);

	return 0;
}

char *strcat(char *dest, const char *src)
{
	char *original_dest = dest;
	while(*dest != '\0')
	{
		dest++;
	}
	for( ; (*dest = *src) != '\0'; )
	{
		src++;
		dest++;
	}
	return dest;		
}


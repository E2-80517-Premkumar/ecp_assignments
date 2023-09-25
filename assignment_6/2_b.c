#include<stdio.h>

char *strcpy(char *dest, const char *src);

int main(void)
{
	char src[64] = "Sunbeam Hinjawadi";
	char dest[64];
	printf("Source string : %s\n", src);

	strcpy(dest, src);
	printf("Copied string : %s\n", dest);

	return 0;
}

char *strcpy(char *dest, const char *src)
{
	char *original_dest = dest;
	for( ; (*dest = *src) != '\0'; ++src, ++dest);
	return original_dest;
}


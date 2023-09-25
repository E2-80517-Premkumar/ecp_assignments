#include<stdio.h>

int main(void)
{
	char ch;

	FILE *fp = fopen("file1.txt", "r");
	
	printf("File content : \n");
	while((ch = fgetc(fp)) != EOF)
		printf("%c", ch);

	fclose(fp);

	return 0;
}


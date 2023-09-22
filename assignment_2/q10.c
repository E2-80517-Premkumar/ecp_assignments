#include<stdio.h>

int main(void)
{
	char c;
	printf("Enter any character : ");
	scanf("%c", &c);
	
	if(c >= 65 && c <= 90 || c >= 97 && c <= 122)
	{
		printf("ALPHABET : %c is a letter\n", c);
		if(c >= 65 && c <= 90)
			printf("UPPERCASE : %c is an uppercase letter\n", c);

	    if(c >= 97 && c <= 122)
			printf("LOWERCASE : %c is a lowercase letter\n", c);
	}		
	else if(c >= 48 && c <= 57)
		printf("DIGIT : %c is a digit\n", c);
	
	else if(c == 32 || c == 9 || c == 13 || c == 10)
		printf("SPACE : %c is a space, tab, carriage return, new line\n", c);
	
	else
		printf("OTHER : Not listed above\n");

	return 0;
}


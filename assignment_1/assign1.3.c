#include<stdio.h>
int main()
{
	char character;
	int ascii;
	printf("Enter the character:");
	scanf("%c",&character);
	printf("Decimal:%d\n",character);
	printf("Hex:%x\n",character);
	printf("Octal:%o\n",character);
	printf("Enter ASCII value:");
	scanf("%d",&ascii);
	printf("ASCII character:%c\n",ascii);
	return 0;
}

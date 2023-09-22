
#include<stdio.h>

int main(void)
{
	int year;
	printf("Enter a year : ");
	scanf("%d", &year);

	printf("1) without using logical operators : \n");
	if(year % 4 == 0)
		printf("The given year is a leap year\n");
	else
		printf("The given year is not a leap year\n");

	printf("2) Using logical operator : \n");
	if(year % 400 == 0 || year % 4 == 0)
		printf("The given year is a leap year\n");
	else
	 	printf("The given year is not a leap year\n");

	printf("3) Using conditional operator : \n");
	year % 4 == 0 ? printf("The given year is a leap year\n") : printf("The given year is not a leap year\n");

	return 0;
}

#include<stdio.h>

void leap_year(int);
void display_days(int, int);

int main(void)
{
	int year, month, y1;
	printf("Enter a year : \n");
	scanf("%d", &year);

	year = y1;
	
	leap_year(year);
	do
	{
		printf("\n0.EXIT\n");

		printf("\n1.JAN\n");
		printf("2.FEB\n");
		printf("3.MAR\n");
		printf("4.APR\n");
		printf("5.MAY\n");
		printf("6.JUNE\n");
		printf("7.JULY\n");
		printf("8.AUG\n");
		printf("9.SEPT\n");
		printf("10.OCT\n");
		printf("11.NOV\n");
		printf("12.DEC\n");

		printf("Enter a month : \n");
		scanf("%d", &month);

		if(month == 0)
			continue;
	
		display_days(y1, month);

	}while(month != 0);

	return 0;
}

void leap_year(int yr)
{
	if(yr%400 == 0 || yr%4 == 0)
		printf("The entered year is a leap year\n");
	else
		printf("The entered year is not a leap year\n");
}

void display_days(int y, int mon)
{
	switch(mon)
	{
		case 1:
			printf("Month : January\n");
			printf("No. of days : 31\n");
			break;

		case 2:
			printf("Month : February\n");
			if(y%400 == 0 || y%4 == 0)
				printf("No. of days : 29\n");
			else
				printf("No. of days : 28\n"); 
			break;

		case 3:
			printf("Month : March\n");
			printf("No. of days : 31\n");
			break;

		case 4:
			printf("Month : April\n");
			printf("No. of days : 30\n");
			break;

		case 5:
			printf("Month : May\n");
			printf("No. of days : 31\n");
			break;

		case 6:
			printf("Month : June\n");
			printf("No. of days : 30\n");
			break;

		case 7:
			printf("Month : July\n");
			printf("No. of days : 31\n");
			break;

		case 8:
			printf("Month : August\n");
			printf("No. of days : 31\n");
			break;

		case 9:
			printf("Month : September\n");
			printf("No. of days : 30\n");
			break;

		case 10:
			printf("Month : October\n");
			printf("No. of days : 31\n");
			break;

		case 11:
			printf("Month : November\n");
			printf("No. of days : 30\n");
			break;

		case 12:
			printf("Month : December\n");
			printf("No. of days : 31\n");
			break;
	}
	printf("\n");
}


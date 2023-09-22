#include<stdio.h>

int main(void)
{
	int month, year;
	printf("Enter a month (1-12) : ");
	scanf("%d", &month);
	printf("Enter a year : ");
	scanf("%d", &year);
	
	printf("---------------Using if-else ladder---------------\n");
	if(year%400 == 0 || year%4 == 0 && year%100 != 0)
	{
		if(month == 2)
			printf("February in %d and has 29 days\n", year); 
		else if(month == 4)
			printf("April in %d and has 30 days\n", year);
		else if(month == 6)
			printf("June in %d and has 30 day\n", year);
		else if(month == 9)
			printf("September in %d and has 30 day\n", year);
		else if(month == 11)
			printf("November in %d and has 30 day\n", year);
		else if(month == 1)
			printf("January in %d and has 31 days\n", year); 
		else if(month == 3)
			printf("March in %d and has 31 days\n", year);
		else if(month == 5)
			printf("May in %d and has 31 day\n", year);
		else if(month == 7)
			printf("July in %d and has 31 day\n", year);
		else if(month == 8)
			printf("August in %d and has 31 day\n", year);
		else if(month == 10)
			printf("October in %d and has 31 days\n", year);
		else if(month == 12)
			printf("December in %d and has 31 days\n", year);
		else
			goto L1;
	}
	else
	{	
		if(month == 2)
			printf("February in %d and has 28 days\n", year); 
		else if(month == 4)
			printf("April in %d and has 30 days\n", year);
		else if(month == 6)
			printf("June in %d and has 30 day\n", year);
		else if(month == 9)
			printf("September in %d and has 30 day\n", year);
		else if(month == 11)
			printf("November in %d and has 30 day\n", year);
		else if(month == 1)
			printf("January in %d and has 31 days\n", year); 
		else if(month == 3)
			printf("March in %d and has 31 days\n", year);
		else if(month == 5)
			printf("May in %d and has 31 days\n", year);
		else if(month == 7)
			printf("July in %d and has 31 days\n", year);
		else if(month == 8)
			printf("August in %d and has 31 days\n", year);
		else if(month == 10)
			printf("October in %d and has 31 day\n", year);
		else if(month == 12)
			printf("December in %d and has 31 day\n", year);
		else
			goto L1;
	}

	printf("--------------------Using logical operator-----------------\n");
	if(year%400 == 0 || year%4 == 0 && year%100 != 0)
	{
		if(month == 2)
			printf("February in %d and has 29 days\n", year); 
		else if(month == 4 || month == 6 || month == 9 || month == 11)
			printf("April, June, September and November in %d and has 30 days\n", year);
		else
			printf("January, March, May, July, August, October and December in %d and has 31 day\n", year);
	}
    else
	{
		if(month == 2)
			printf("February in %d and has 28 days\n", year); 
		else if(month == 4 || month == 6 || month == 9 || month == 11)
			printf("April, June, September and November in %d and has 30 days\n", year);
		else
			printf("January, March, May, July, August, October and December in %d and has 31 day\n", year);
	}
L1:
	return 0;
}

